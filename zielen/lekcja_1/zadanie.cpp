#include "zadanie.h"
#include <iostream>

std::string komunikat = "";

/*	czerwony.redefine(LORNETKA, GOTOWANIE, CZERWONY);
	zielony.redefine(DLUGOPISZTRUCIZNA, GPS, ZIELONY);
	niebieski.redefine(PORADNIKC, IDENTYFIKATOR, NIEBIESKI); //poprawny
	zolty.redefine(SPIWOR, PODRECZNIKANGIELSKI, ZOLTY);*/

int Plecak::wywolaj(typPlecaka typ) {
	switch (typ)
	{
	case CZERWONY:
		test(false);
		return 0;
		break;
	case ZIELONY:
		test(false);
		return 0;
		break;
	case ZOLTY:
		test(false);
		return 0;
		break;
	case NIEBIESKI:
		test(true);
		return 1;
		break;
	default:
		return 0;
		break;
	}
}

bool Plecak::test(bool a){
	if(a){
		komunikat = "Gratulacje! Teraz musisz szybko uciekać, zanim lawina Cie dorwie!"; //poprawic polskie znaki bo u mnie nie ma .-.
		return true;
	}

	return false;
}