//
// Created by afeli on 5/12/2018.
//

#ifndef TOMASULO_INSTRMEMORY_H
#define TOMASULO_INSTRMEMORY_H

#include "iostream"

using namespace std;

class instrMemory {
private:
    string instructions[12];
public:
    string getInstruction(int pc){
        return instructions[pc];
    }

};



#endif //TOMASULO_INSTRMEMORY_H
