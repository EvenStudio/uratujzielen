#include "solution.cpp"
#include <iostream>

std::string komunikat = "";

bool test(solution()) {
    if (kodzabezpieczajacy == 8271)
    {
        komunikat = "Tak! Misja wykonana!";
        return true;
    } 
    else 
    {
        komunikat = "Nie udało się złamać hasła!";
        return false;
    }

