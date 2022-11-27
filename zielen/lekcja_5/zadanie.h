#pragma once
#include <vector>
#include <string>

void napraw(int numerUrzadzenia);
void restart();

struct Urzadzenie{
    int numer;
    std::string nazwa;
    bool dziala;
};

Urzadzenie urzadzenia[50];