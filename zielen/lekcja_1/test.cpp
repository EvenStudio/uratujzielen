#include <string>
#include "solution.cpp"
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

string komunikat = "";

bool test() {
    string kolorplecaka = solution();
    for (size_t i = 0; i < kolorplecaka.length(); i++)
    {
        kolorplecaka[i] = tolower(kolorplecaka[i]);
    } 
    if (kolorplecaka == "niebieski")
        {
            komunikat = "Gratulacje! Wybrałeś dobry plecak!";
            return true;
        }
    else {komunikat = "Wziąłeś zły plecak!"; return false;}
}
