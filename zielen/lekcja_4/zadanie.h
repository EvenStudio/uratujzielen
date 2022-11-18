#pragma once
#include <vector>

bool test();

struct Agregat {
    int ID;
    bool CzyDziala;
};

class Maszyna {
    public:
        Agregat* agregaty[99];
        Maszyna();
};

Maszyna* maszyna = new Maszyna();