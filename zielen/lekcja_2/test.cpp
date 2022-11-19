#include <solution.cpp>
#include <zadanie.cpp>
#include <zadanie.h>

bool test(){
    zadzwon(solution());
    if(solution() != numerTelefonu){
        return false;
    }
    else{
        return true;
    }
}