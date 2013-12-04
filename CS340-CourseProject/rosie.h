#ifndef ROSIE_H
#define ROSIE_H

#include "Assistants.h"

using namespace std;

class Rosie {
public:
    Rosie();
    int RandomR();
    void greet();
    void affirm();
    void reportError(string s, int n);

private:
    Assistants *assistant;
    string lastName;
    string myName;
};

#endif //ROSIE_H
