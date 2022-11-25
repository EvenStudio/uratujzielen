#include "zadanie.h"
#include <iostream>

std::string komunikat = "";

char RASU::deszyfruj(std::string danewejsciowe, int kodzabezpieczajacy) {
    if (kodzabezpieczajacy != 8271) {
        komunikat = "Nie udało się otworzyć drzwi! Sprobuj ponownie!";
    } else {
        if (danewejsciowe == RASU::dziwneznaki) {
            komunikat = "Tak! Udało się! Misja wykonana!";
        }
    }
}

bool test(){
    if (komunikat == "Tak! Udało się! Misja wykonana!") {
        std::cout << komunikat;
        return true;
    } else {
        return false;
    }
}