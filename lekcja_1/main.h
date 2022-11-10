#pragma once

enum elementPlecaka {
	PORADNIKC=0,
	IDENTYFIKATOR=1,
	GPS=2,
	LORNETKA=3,
	SPIWOR=4,
	PODRECZNIKANGIELSKI=5,
	GOTOWANIE=6,
	DLUGOPISZTRUCIZNA=7
};

enum typPlecaka {
	CZERWONY,
	ZIELONY,
	NIEBIESKI,
	ZOLTY
};

class Plecak {
private:
	elementPlecaka atrybut1;
	elementPlecaka atrybut2;
	typPlecaka typ;
public:
	void redefine(elementPlecaka a, elementPlecaka b, typPlecaka t);
	Plecak();
	static int wywolaj(Plecak plecak);
};

namespace Plecaki {
	Plecak czerwony;
	Plecak zielony;
	Plecak niebieski;
	Plecak zolty;
}
