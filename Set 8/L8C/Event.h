//
// Created by gwdin on 12/8/2021.
//

#ifndef LAB8C_EVENT_H
#define LAB8C_EVENT_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include "Date.h"

using namespace std;

class Event {
public:
    Event();
    Event(Date date,string tile, string location);
    string getlocation();
    string gettile();
    Date getDate();
    void printer(Date date,string tile, string location);





private:
    Date date;
    string location;
    string tile;


};



#endif //LAB8C_EVENT_H
