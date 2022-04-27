#include "Individual.h"
#include "BitFlip.h"
#include <iostream>

virtual BitFlip::mutate(Individual *ind, int k) {
    this->ind = ind;
    this->k = k;
    int length = ind->getLength();

    while(k<length) {
        k = k - length;
    }

    ind->flipBit(k);
}

int elementChanged(Individual *ind, int k) {
    this->ind = ind;
    this->k = k;

    while(k<length) {
        k = k - length;
    }

    return k;
}

