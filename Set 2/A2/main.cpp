/* CSCI 261 Assignment 2: A2 - This One Goes To 11 *
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
* Resources used ():
*     /
*
*
* convert any value to a heat range & vice versa
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    double first;
    double second;
    const double TOLERANCE = 0.000001;
    // tolerance is used for two floating point variables
    double lowMed;
    double medHigh;
    double temp;
    srand(time(0));


    cout << "Enter the first value of the range: ";
    cin >> first;

    cout << "Enter the second value of the range: ";
    cin >> second;

    if ((first != second) && (fabs(first - second) >= TOLERANCE * 9)) {
        cout << endl << "Valid!" << endl;
        cout << "Min: " << first << endl;
        cout << "Max: " << second << endl << endl;
    }
    else if ((first == second) || (fabs(first - second) < TOLERANCE * 9)) {
        cout << endl << "Invalid.";
    }
    // first if: makes sure that the variables are not the same and that the first value and the second value differ by at least 9*TOLERANCE
    // second if: checks for in-validation

    // (second - first) * (1/3) or (2/3) then add first to get boundaries
    lowMed =  (((second - first) * (1.0/3.0)) + first);
    medHigh = (((second - first) * (2.0/3.0)) + first);

    if (medHigh > lowMed) {
        cout << "Low/Medium Boundary: " << lowMed << endl;
        cout << "Medium/High Boundary: " << medHigh << endl;
    }
    else if (medHigh < lowMed){
        cout << "Low/Medium Boundary: " << medHigh << endl;
        cout << "Medium/High Boundary: " << lowMed << endl << endl;
    }

    cout << endl << "Enter a temperature: ";
    cin >> temp;
    cout << endl;

    if ((temp > second) || (temp < first)) {
        cout << temp << " is out of range.";
    }
    else if ((temp < lowMed) && (temp >= first)) {
        cout << temp << " is a Low temperature." << endl << endl << endl;
        cout << "You could also use " << ((medHigh - lowMed) * ((double)rand()/RAND_MAX)) + first << " as a temperature.";
    }
    else if ((temp > medHigh) && (temp <= second)) {
        cout << temp << " is a High temperature." << endl << endl << endl;
        cout << "You could also use " << ((medHigh - lowMed) * ((double)rand()/RAND_MAX)) + medHigh << " as a temperature.";
    }
    else if ((temp >= lowMed) || (temp <= medHigh)) {
        cout << temp << " is a Medium temperature." << endl << endl << endl;
        cout << "You could also use " << ((medHigh - lowMed) * ((double)rand()/RAND_MAX)) + lowMed << " as a temperature.";
    }
    // finds if the temperature entered is high, low, med, or out of range; as well finds a random temperature to the corresponding range









    return 0;
}
