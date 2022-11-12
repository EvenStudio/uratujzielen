#include "main.h"
#include <cstdlib>

int numerTelefonu = 501098268;

std::string komunikat = "";

const char* odpowiedzi[2] = { 
    "Heniek, to ty? Nie mam tych burakow na jutro." ,
    "Kto mi sie tak wczesnie rano dobija do telefonu!?"
};

int losowyNumerZWykluczeniemPoprawnego() {
    int i;
    i = rand() % 1000000000;
    if (i == numerTelefonu) {
        losowyNumerZWykluczeniemPoprawnego();
    }
    return i;
}

int zhakuj(std::string nazwaFirmy) {
    if (nazwaFirmy == "ProvivoltFOTOWOLTAIKA") {
        return numerTelefonu;
    } else {
        return losowyNumerZWykluczeniemPoprawnego();
    }
}

void zadzwon(int numer) {
    if (numer != numerTelefonu) {
        komunikat = odpowiedzi[rand() % 2];
    } else {
        komunikat = "Dzien dobry witamy w dziale fotowoltaiki Wroclaw.";
    }
}

bool test(){
    zadzwon(solution());
    if(solution() != numerTelefonu){
        return false;
    }
    else{
        return true;
    }
}