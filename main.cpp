#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <vector>
#include <iostream>
#include <string>

// calls the mutate function on the individual object and returns the offspring
// should decide which mutator to use based on the actual type of mutator
Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    mPtr->mutate(indPtr, k);
    Individual *offspring = indPtr;
    
    return offspring;
}

int main() {
    // creation
    Individual k1(5);
    Individual k2("000000");
    BitFlip bf;
    BitFlipProb bfp(0.65);
    Rearrange rr;

    // modification
    bf.mutate(&k1, 4);
    bfp.mutate(&k2, 4);
}
    /*
    Individual *ind = new Individual(7);
    Individual *indPopulated = new Individual("101010101");

    std::cout << "This should return both Individuals" << std::endl;
    std::cout << ind->getString() << std::endl;
    std::cout << indPopulated->getString()<< "\n" << std::endl;

    std::cout << "Below should flip a zero value" << std::endl;
    std::cout << ind->getBit(0) << std::endl;
    ind->flipBit(0);
    std::cout << ind->getBit(0) << "\n" << std::endl;

    // WORKS :D
    std::cout << "This should now return Individual with modified values as a string: " << ind->getString() << std::endl;
    
    std::cout << "Below should flip bit at position 0 of populated vector" << std::endl;
    std::cout << indPopulated->getBit(3) << std::endl;
    indPopulated->flipBit(3);
    std::cout << indPopulated->getBit(3) << std::endl;
    std::cout << indPopulated->getBit(1) << std::endl;
    indPopulated->flipBit(1);
    std::cout << indPopulated->getBit(1) << "\n" << std::endl;

    std::cout << "This should return the longest consecutive sequence of 1s" << std::endl;
    std::cout << ind->getMaxOnes() << std::endl;
    std::cout << indPopulated->getMaxOnes() << "\n" << std::endl;

    std::cout << "This should return the length of both binaries" << std::endl;
    std::cout << ind->getLength() << std::endl;
    std::cout << indPopulated->getLength() << "\n" << std::endl;
 
    // test flipbit
    BitFlip *doFlip = new BitFlip();
    doFlip->mutate(ind,13);
    std::cout << "FlipBit changed bit " << doFlip->elementChanged(ind,13) << "!" << std::endl;

    // test FlipBitProb
    BitFlipProb *doFlipProbTrue = new BitFlipProb(0.51);
    BitFlipProb *doFlipProbFalse = new BitFlipProb(0.49);
    std::cout << doFlipProbTrue->mutate(ind,13) << std::endl;
    doFlipProbFalse->mutate(ind,13);
    */
