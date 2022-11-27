#include "solution.cpp"
#include <iostream>
using namespace std;

string komunikat = "";
bool test(){
    GenerujTest();
    a = 5*a;
    a = a+12;
    a = a/3;
    a = a-65;
    a = a*2;
    a = a+19;
    if (solution() == a)
        {
            komunikat = "Gratulacje! Twój algorytm działa!";
            return true;
        }
    else {komunikat = "Uwaga, coś jest nie tak z twoim algorytmem!"; return false;}
}