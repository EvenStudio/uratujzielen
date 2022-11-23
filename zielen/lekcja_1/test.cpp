#include <string>
#include "solution.cpp"
using namespace std;

string komunikat = "";

bool test() {
    if (solution() == "niebieski" || solution() == "Niebieski" || solution() == "NIEBIESKI")
        {
            komunikat = "";
            return true;
        }
    else {komunikat = ""; return false;}
}
