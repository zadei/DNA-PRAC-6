#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <iostream>
#include <string>
#include <vector>

class Individual {
public:
    // constructors
    Individual(int binaryLength);
    Individual(std::string binaryStr);
    
    // methods
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    void rotateVector(int amount);

private:
    std::vector<std::string> binaryVector;
    int binaryLength;
    std::string binaryStr;
    std::vector<std::string> populatedVector;
};
#endif