/* CSCI 261 Lab 7B - Classes Part I: Godzilla
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 3
* Resources used ():
*     /
*
*
*
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>

#include "Godzilla.h"
using namespace std;








int main() {
    srand(time(0));
    Godzilla creature1;
    Godzilla creature2;
    string inputname;
    double inputhealth;
    double inputpower;


    cout << "Enter the health of Godzilla: ";
    cin >> inputhealth;
    creature1.SetHealth(inputhealth);

    cout << "Enter the power of Godzilla: ";
    cin >> inputpower;
    creature1.SetPower(inputpower);

    cout << endl;


    cout << "Enter the name of the second creature: ";
    cin >> inputname;
    creature2.SetName(inputname);

    cout << "Enter the health of the second creature: ";
    cin >> inputhealth;
    creature2.SetHealth(inputhealth);

    cout << "Enter the power of the second creature: ";
    cin >> inputpower;
    creature2.SetPower(inputpower);


    cout << endl << "The two creatures are:" << endl;

    cout << creature1.getName() << " (P: " << creature1.getpower() << ") - H: " << creature1.gethealth() << endl;

    cout << creature2.getName() << " (P: " << creature2.getpower() << ") - H: " << creature2.gethealth();

    return 0;
}
