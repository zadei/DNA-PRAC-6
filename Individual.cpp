#include "Individual.h"
#include <iostream>
#include <string>
#include <vector>

// constructs binary string with default value of 0
Individual::Individual(int binaryLength) {
    this->binaryLength = binaryLength;
    for (int i = 0; i < binaryLength; i++) {
        binaryVector.push_back("0");
    }

    // convert vector to string for use in getString()
    for (int i = 0; i < binaryVector.size(); i++) {
        binaryStr += binaryVector[i];
    }
}

// converts string to binary vector
Individual::Individual(std::string binaryStr) {
    this->binaryStr = binaryStr;
    std::vector<char> strChar(binaryStr.begin(), binaryStr.end());

    for (int i = 0; i < strChar.size(); i++) {
        std::string temp(1, strChar[i]);
        binaryVector.push_back(temp);
    }

    binaryLength = binaryVector.size();
}

// outputs vector as a single string
std::string Individual::getString() {
    return binaryStr;
}

// returns value at position 'pos'
int Individual::getBit(int pos) {
    std::string tempStr = binaryVector[pos];
    int bitAtPos = std::stoi(tempStr);
    return bitAtPos;
}

// flips bit value at position 'pos'
void Individual::flipBit(int pos) {
    if (binaryVector.at(pos) == "0") {
        binaryVector.at(pos) = "1";
    } else {
        binaryVector.at(pos) = "0";
    }
}

// returns longest consecutive sequence of 1s
int Individual::getMaxOnes() {
    int max = 0;
    int count = 0;
    for (int i = 0; i < binaryVector.size(); i++) {
        if (binaryVector.at(i) == "1") {
            count++;
        } else {
            if (count > max) {
                max = count;
            }
            count = 0;
        }
    }
    return max;
}


// returns length of binary vector
int Individual::getLength() {
    return binaryLength;
}
