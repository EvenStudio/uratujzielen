#pragma once
#include <vector>

void napraw(int numerUrzadzenia);
void restart();

struct Urzadzenie{
    int numer;
    std::string nazwa;
    bool dziala;
};

Urzadzenie urzadzenia[50];