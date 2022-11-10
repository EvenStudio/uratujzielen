#include "main.h"
#include <cstdio>

void Plecak::redefine(elementPlecaka a, elementPlecaka b, typPlecaka t) {
	this->atrybut1 = a;
	this->atrybut2 = b;
	this->typ = t;
}

int Plecak::wywolaj(Plecak plecak){
	switch (plecak.typ) {
	case CZERWONY:
		//komunikat ze zly wybor
		return 1;
		break;
	case NIEBIESKI:
		//tekst mikolaja ze sie udalo
		printf("udalo sie!"); //test
		return 0;
		break;
	case ZIELONY:
		//nie udalo sie
		return 1;
		break;
	case ZOLTY:
		//znowu sie nie udalo
		return 1;
		break;
	default:
		//wywala blad
		return 1;
		break;
	}
}

Plecak::Plecak() {}

Plecak Plecaki::czerwony(LORNETKA, GOTOWANIE, CZERWONY);
Plecak Plecaki::zielony = Plecak(DLUGOPISZTRUCIZNA, GPS, ZIELONY);
Plecak Plecaki::niebieski = Plecak(PORADNIKC, IDENTYFIKATOR, NIEBIESKI); //poprawny
Plecak Plecaki::zolty = Plecak(SPIWOR, PODRECZNIKANGIELSKI, ZOLTY);