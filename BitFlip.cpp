#include "BitFlip.h"

virtual BitFlip::mutate(Individual *ind, int k) {
    this->ind = ind;
    this->k = k;
    int length = ind->getLength();

    while(k<length) {
        k = k - length;
    }

    ind->flipBit(k);
}