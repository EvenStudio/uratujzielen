#include "solution.cpp"
#include <algorithm>

std::string komunikat = "";

bool test(){
    std::pair<std::string, std::string> rozwiazanie = solution();
    std::string a = rozwiazanie.first;
    std::string b = rozwiazanie.second;
    std::transform(a.begin(), a.end(), a.begin(), tolower);
    std::transform(b.begin(), b.end(), b.begin(), tolower);
    if(a == "szachisci" || a == "szachiści"){
        if (b == "wyspa bielarska")
        {
            komunikat = "Gratulacje, znalazłeś frytkę!";
            return true;
        }
        else{goto f;}     
    }
    else{goto f;}
    f:
    komunikat = "Niestety nie ma tu frytki";
    return false;
}