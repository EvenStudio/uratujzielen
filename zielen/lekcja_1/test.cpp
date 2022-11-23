#include <iostream>
#include "solution.cpp"
using namespace std;

string komunikat = " ";

bool test() {
    if (solution() == "niebieski")
        {
            komunikat = "";
            return true;
        }
    else {komunikat = ""; return false;}
}
