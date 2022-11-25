#define UNICODE
#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
#include <locale.h>
#include <wincon.h>
#include <locale>
#include <clocale>

//kompilacja: g++ -o tester.exe kompilacja.cpp -DUNICODE -municode

std::ofstream Funkcja("main.cpp");

int wmain(){
    SetConsoleTitle(L"Tester Misji na LNU");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::setlocale(LC_ALL, "polish");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
//    std::cout.imbue(std::locale("pl_PL"));
//    std::string name = std::cout.getloc().name();
    std::string mainfile;
    std::cout << "Glowny plik do kompilacji:";
    std::cin >> mainfile;
    Funkcja << "#include <iostream>" << "\n" << "#include " << '"' << mainfile << '"' << "\n" << "int main(){test(); if(test() == true){std::cout <<" << '"' << "Dobrze, komunikat:" << '"'<< ";std::cout << komunikat;}else{std::cout <<"<< '"' << "Zle, komunikat:" << '"' << ";std::cout << komunikat;}return 0;}";
    Funkcja.close();
    start:
    system("g++ main.cpp");
    std::wcout << system("a");
    std::cout << "Kontynuowac [T/n]";
    std::cin.clear();
    if(tolower(getchar()) != 'n'){
        goto start;
    }
    remove("main.cpp");
    remove("a");
    remove("a.exe");
    std::wcout << "\n";
}