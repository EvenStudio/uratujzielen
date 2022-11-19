#include "zadanie.h"

std::string nazwy[10]{
"Filtr mechaniczny",
"Filtr węglowy",
"Zawór",
"Sito pionowe",
"Napowietrzacz",
"Pompa",
"Podgrzewacz",
"Generator",
"Monitor",
"Czujnik"
};
bool systemOn = false;
bool poprawne = true;

std::string komunikat = "";

void losuj(){
    for(int i = 0; i < 50; i++){
        urzadzenia[i].numer = i+100;
        urzadzenia[i].nazwa = nazwy[rand() % 10];
        if(rand() % 4 != 0){
            urzadzenia[i].dziala = true;
        }
        else{
            urzadzenia[i].dziala = false;
        }
    }
}

void napraw(int numerUrzadzenia){
    if(urzadzenia[numerUrzadzenia - 100].dziala = false){
        urzadzenia[numerUrzadzenia - 100].dziala = true;
    }
    else{
        if(rand() % 4 != 0){
            urzadzenia[numerUrzadzenia - 100].dziala = false;
        }
    }
}

void restart(){
    systemOn = true;
}

bool test(){
    losuj();
    for(int i = 0; i < 50; i++){
        if(urzadzenia[i].dziala == false){
            poprawne = false;
        }
    }
    if(poprawne == true && systemOn == true){
        return true;
        komunikat = "Gratulacje, udało ci się uratować Wrocław!";
    }
    else{
        komunikat = "Niestety nadal nie działają wszystkie maszyny, lub nie zrobiłeś restartu systemu.";
        return false;
    }
}