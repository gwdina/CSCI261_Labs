//
// Created by gwdin on 12/8/2021.
//

#ifndef LAB8C_DATE_H
#define LAB8C_DATE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class Date {
public:
    void SetDate(int inputDay, int inputMonth, int inputYear);
    Date();
    int getday();
    int getmonth();
    int getyear();
    bool early(Date &date); //godizzla attack thing
    void printDate();



private:
    int day;
    int month;
    int year;

};




#endif //LAB8C_DATE_H
