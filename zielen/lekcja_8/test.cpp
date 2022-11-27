#include "solution.cpp"
#include <iostream>
#include "zadanie.cpp"

std::string komunikat = "";

bool test() {
    if (solution() == 87256387841)
    {
        komunikat = "Tak! Misja wykonana!";
        return true;
    } 
    else 
    {
        komunikat = "Nie udało się złamać hasła!";
        return false;
    }
}
