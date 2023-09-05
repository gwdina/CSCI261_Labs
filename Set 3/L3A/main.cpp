/* CSCI 261 Lab3A: Lab 3A - Math Worksheet Generator
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
* Resources used ():
*     /
*
*
* first generates two random decimal numbers within the range -100 to 100 inclusive.
 * Next, generate a random number between 1 and 4 inclusive to correspond to each of our math operators
 *
*/

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    ofstream math("mathWorksheet.txt");
    srand(time(0));
    double A;
    double B;
    int mathSym;
    char sym;
    double sol;

    // check for an error
    if ( math.fail() ) {
        cerr << "Error opening output file";
        return -1;
    }

     A = 200 * ((double)rand()/RAND_MAX) - 100;
     B = 200 * ((double)rand()/RAND_MAX) - 100;
     mathSym = (rand() % 4) + 1;

     switch (mathSym) {
         case 1:
             sym = '+';
             break;

         case 2:
             sym = '-';
             break;

         case 3:
             sym = '*';
             break;
         case 4:
             sym = '/';
             break;
         default:
             cout << "ERROR";
             return -1;
     }

     math << A << " " << sym << " " << B << " = ?";



     math.close();

    return 0;
}
