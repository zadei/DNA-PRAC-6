#include "Individual.h"
#include "BitFlip.h"
#include <iostream>


//BitFlip::BitFlip() {}

Individual BitFlip::mutate(Individual *ind, int k) {
    ind_ = ind;
    flipNo = k;
    int length = ind->getLength();

    while(flipNo>=length) {
        flipNo = flipNo - length;
    }

    ind->flipBit(flipNo);

    return ind->getString();
}

int BitFlip::elementChanged(Individual *ind, int k) {
    ind_ = ind;
    flipNo = k;
    int length = ind->getLength();

    while(flipNo>=length) {
        flipNo = flipNo - length;
    }
    
    return flipNo;
}

