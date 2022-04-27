#include "Individual.h"
#include "BitFlip.h"
#include <vector>
#include <iostream>
#include <string>

// driver program
int main() {
    Individual *ind = new Individual(7);
    Individual *indPopulated = new Individual("101010101");
    BitFlip *doFlip = new BitFlip();

    std::cout << "This should return both Individuals" << std::endl;
    std::cout << ind->getString() << std::endl;
    std::cout << indPopulated->getString()<< "\n" << std::endl;

    std::cout << "Below should flip a zero value" << std::endl;
    std::cout << ind->getBit(0) << std::endl;
    ind->flipBit(0);
    std::cout << ind->getBit(0) << "\n" << std::endl;

    
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
 
    std::cout << "This will test the BitFlip class" << std::endl;
    doFlip->mutate(ind,13);
    std::cout << "This changed the " << doFlip->elementChanged(ind,13) << " bit" << std::endl;

    

    return 0;
}