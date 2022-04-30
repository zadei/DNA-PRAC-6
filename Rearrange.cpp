#include "Rearrange.h"
#include "Individual.h"
#include <vector>
#include <iostream>


// every digit from k'th position to the end of moved to the beginning
Individual Rearrange::mutate(Individual *ind, int k) {
    // determine where in the list k resolves to
    this->ind = ind;
    int flipNo = k;
    int length = ind->getLength();

    while(flipNo>=length) {
        flipNo = flipNo - length;
    }

    ind->rotateVector(length-flipNo);
    
    return ind->getString();
}