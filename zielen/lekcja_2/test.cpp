#include "solution.cpp"

bool test(){
    zadzwon(solution());
    if(solution() != numerTelefonu){
        return false;
    }
    else{
        return true;
    }
}