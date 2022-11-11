enum typPlecaka {
	CZERWONY,
	ZIELONY,
	NIEBIESKI,
	ZOLTY
};

class Plecak {
private:
	typPlecaka typ;
public:
	Plecak();
	static int wywolaj(typPlecaka typ);
	static void test();
};