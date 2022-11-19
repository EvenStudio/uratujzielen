#include <iostream>
#include <filesystem>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <string>

std::ofstream Funkcja("main.cpp");

int main(){
    start:
    std::string mainfile;
    std::cout << "Glowny plik do kompilacji:";
    std::cin >> mainfile;
    Funkcja << "#include <iostream>" << "\n" << "#include " << '"' << mainfile << '"' << "\n" << "int main(){if(test() == true){std::cout <<" << '"' << "Dobrze, komunikat:" << '"'<< ";std::cout << komunikat;}else{std::cout <<"<< '"' << "Zle, komunikat:" << '"' << ";std::cout << komunikat;}return 0;}";
    Funkcja.close();
    system("g++ main.cpp");
    std::cout << system("a");
    remove("main.cpp");
    remove("a");
    remove("a.exe");
    std::cout << "\n";
    system("pause");
}