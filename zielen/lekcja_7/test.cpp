#include "solution.cpp"
#include <iostream>
using namespace std;

string komunikat = "";
bool test(){
    GenerujTest();
    int b = a;
    b = 5*b;
    b = b+12;
    b = b/3;
    b = b-65;
    b = b*2;
    b = b+19;
    if (solution() == b)
        {
            komunikat = "Gratulacje! Twój algorytm działa!";
            return true;
        }
    else {komunikat = "Uwaga, coś jest nie tak z twoim algorytmem!"; return false;}
}