#pragma once
#include <cstdlib>
#include <iostream>

namespace RASU {

    //Dziwne znaki, ktore zapamiętał RASU.
    std::string dziwneznaki;

    //Dane wyjściowe RASU. Aktualizują się po kazdej wykonanej komendzie.
    std::string danewyjsciowe;

    char deszyfruj(std::string danewejsciowe, int kodzabezpieczajacy);
};
