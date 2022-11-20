#include "zadanie.cpp"
#include <cstdio>

int solution(){
    for (size_t i = 0; i < 50; i++)
    {
        if(urzadzenia[i].dziala == false){
            napraw(urzadzenia[i].numer);
        }
    }
    restart();
    return 0;
}