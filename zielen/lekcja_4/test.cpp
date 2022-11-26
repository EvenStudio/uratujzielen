#include "solution.cpp"
#include <ctime>

std::string komunikat = "";

bool test(){
    srand(time(NULL));
    losuj();
    solution();
    for(int i = 0; i < 50; i++){
        if(urzadzenia[i].dziala == false){
            poprawne = false;
        }
    }
    if(poprawne == true && systemOn == true){
        komunikat = "Gratulacje, udało ci się uratować Wrocław!";
        return true;
    }
    else{
        komunikat = "Niestety nadal nie działają wszystkie maszyny, lub nie zrobiłeś restartu systemu.";
        return false;
    }
}