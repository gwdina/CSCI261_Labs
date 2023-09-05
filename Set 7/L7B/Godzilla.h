//
// Created by gwdin on 11/15/2021.
//

#ifndef L7B_GODZILLA_H
#define L7B_GODZILLA_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class Godzilla {
public:
    void SetName(string creaturename);
    void SetHealth(double inputHealth);
    void SetPower(double inputPower);
    Godzilla();
    double gethealth();
    double getpower();
    string getName();


private:
    string name;
    double health;
    double power;

};

#endif //L7B_GODZILLA_H
