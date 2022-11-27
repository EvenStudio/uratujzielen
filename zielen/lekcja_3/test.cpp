#include "solution.cpp"
#include "zadanie.cpp"

std::string komunikat = " ";

bool test()
{
  srand((unsigned) time(NULL));
  int a = rand() %100;
  int b = rand() %100;
  if (solution() == b) 
  {
    komunikat = "Udało ci się pomóc kosmicie! Dzięki tobie może on wrócić do domu. Po chwili nadlatuje statek identyczny do tego, którym przyleciał Inox. Kosmita się żegna, daje jedzenie Azorowi i wchodzi do statku, zostawiając psa. Po chwili odlatuje.";
    return true;   
  }
  else {komunikat = "Nie udało ci się pomóc kosmicie."; return false;}
}
