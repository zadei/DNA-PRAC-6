#include "Individual.h"
#include "BitFlip.h"
#include <iostream>


//BitFlip::BitFlip() {}

void BitFlip::mutate(Individual *ind, int k) {
    this->ind = ind;
    this->k = k;
    int length = ind->getLength();

    while(k<length) {
        k = k - length;
    }

    ind->flipBit(k);
}

int BitFlip::elementChanged(Individual *ind, int k) {
    this->ind = ind;
    flipNo = k;
    int length = ind->getLength();

    while(k<length) {
        k = k - length;
    }

    return k;
}

