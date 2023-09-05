//
// Created by gwdin on 12/8/2021.
//

#include "Event.h"

string Event::gettile(){
    return tile;
}
string Event::getlocation(){
    return location;
}

Date Event::getDate(){
    return date;

}

Event::Event() {
    date = Date();
}
Event::Event(Date date,string tile, string location){
    this->date = date;
    this->tile = tile;
    this->location = location;

}

void Event::printer(Date date,string tile, string location){
    date.printDate();
    cout << ": " << tile << " " << "(" << location << ")";
}
