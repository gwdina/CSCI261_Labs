//
// Created by gwdin on 11/15/2021.
//

#include "Godzilla.h"

double Godzilla::gethealth(){
    return health;
}

double Godzilla::getpower(){
    return power;
}

string Godzilla::getName(){
    return name;
}

Godzilla::Godzilla() {
    name = "Godzilla";
    health =rand()%50 +50;
    power =rand()%10 +15;
}

void Godzilla::SetName(string creaturename) {
    name = creaturename;
}

void Godzilla::SetHealth(double inputHealth) {
    if (inputHealth > 0){
        health = inputHealth;
    }
    else{
        health = 0;
    }
}

void Godzilla::SetPower(double inputPower) {
    if (inputPower > 0){
        power = inputPower;
    }

}

void Godzilla::attack(Godzilla &other) {
    cout << getName() << " attacks " << other.getName() << "." << endl;
    other.SetHealth(other.gethealth() - getpower());

}