#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <string>

std::ofstream Funkcja("main.cpp");

int main(){
    std::string mainfile;
    std::cout << "Główny plik do kompilacji:";
    std::cin >> mainfile;
    Funkcja << "#include <iostream>" << "\n" << "#include <"<< mainfile << ">" << "\n" << "int main(){if(test() == true){std::cout << test();std::cout << komunikat;}else{std::cout << test();std::cout << komunikat;}return 0;}";
    system("g++ -o test main.cpp");
    std::cout << system("test.exe");
    Funkcja.close();
}