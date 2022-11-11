#include "main.h"
#include <cstdio>

Plecak czerwony = Plecak();
Plecak zielony = Plecak();
Plecak niebieski = Plecak();
Plecak zolty = Plecak();

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

Plecak::Plecak() {
	//
}

void Plecak::start() {
	czerwony.redefine(LORNETKA, GOTOWANIE, CZERWONY);
	zielony.redefine(DLUGOPISZTRUCIZNA, GPS, ZIELONY);
	niebieski.redefine(PORADNIKC, IDENTYFIKATOR, NIEBIESKI); //poprawny
	zolty.redefine(SPIWOR, PODRECZNIKANGIELSKI, ZOLTY);
}

Plecak Plecak::wezCzerwony() { return czerwony; }
Plecak Plecak::wezZielony() { return zielony; }
Plecak Plecak::wezNiebieski() { return niebieski; }
Plecak Plecak::wezZolty() { return zolty; }