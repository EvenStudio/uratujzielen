#include "solution.cpp"

std::string komunikat = "";

bool test(){
    losuj();
    solution();
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