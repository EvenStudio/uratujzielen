#include <string>
#include "solution.cpp"
#include <algorithm>
using namespace std;

string komunikat = "";

bool test() {
    string kolorplecaka = solution();
    std::transform(kolorplecaka.begin(), kolorplecaka.end(), kolorplecaka.begin(), tolower);
    if (kolorplecaka == "niebieski")
        {
            komunikat = "Gratulacje! Wybrałeś dobry plecak!";
            return true;
        }
    else {komunikat = "Wziąłeś zły plecak!"; return false;}
}
