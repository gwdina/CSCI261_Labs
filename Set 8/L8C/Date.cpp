//
// Created by gwdin on 12/8/2021.
//

#include "Date.h"


int Date::getday(){
    return day;
}

int Date::getmonth(){
    return month;
}

int Date::getyear(){
    return year;
}

Date::Date() {
    day = 30;
    month = 12;
    year = 1950;
}

void Date::SetDate(int inputMonth, int inputDay, int inputYear) {
    if ((inputDay >= 1) && (inputDay <= 31)){
        day = inputDay;
    }
    if ((inputMonth >= 1) && (inputMonth <= 12)){
        month = inputMonth;
    }
    year = inputYear;

}
bool Date::early(Date &date) {
    if(getyear() < date.getyear()){
        return true;
    }
    if(getyear() > date.getyear()){
        return false;
    }

    if(getmonth() < date.getmonth()){
        return true;
    }
    if(getmonth() > date.getmonth()){
        return false;
    }

    if(getday() < date.getday()){
        return true;
    }
    if(getday() > date.getday()){
        return false;
    }
   else{
       return false;
   }

}

void Date::printDate(){
    cout << month << '/' << day << "/" << year;
}
