#include "zadanie.h"

bool test(){
    //
    return false;
}

Maszyna::Maszyna() {
    for (int i = 0; i <= 99; ++i) {
        this->agregaty[i]->ID = i;
        if (i == 42) {
            this->agregaty[i]->CzyDziala = false;
        } else {
            this->agregaty[i]->CzyDziala = true;
        }
    }
}