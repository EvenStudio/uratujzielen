#include "main.cpp"
#include <stdio.h>

int main(){
	if (Plecak::wywolaj(NIEBIESKI) == 1) {
		printf("Udalo sie!");
	} else {
		printf("Nie udalo sie!");
	}
}
