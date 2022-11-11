#include "main.h"

/*	czerwony.redefine(LORNETKA, GOTOWANIE, CZERWONY);
	zielony.redefine(DLUGOPISZTRUCIZNA, GPS, ZIELONY);
	niebieski.redefine(PORADNIKC, IDENTYFIKATOR, NIEBIESKI); //poprawny
	zolty.redefine(SPIWOR, PODRECZNIKANGIELSKI, ZOLTY);*/

int Plecak::wywolaj(typPlecaka typ) {
	switch (typ)
	{
	case CZERWONY:
	case ZIELONY:
	case ZOLTY:
		return 0;
		break;
	case NIEBIESKI:
		return 1;
		break;
	default:
		break;
	}
}

void Plecak::test(){

}