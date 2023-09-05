/* CSCI 261 Lab3B: Lab 3B - Math Worksheet Solver
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
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
using namespace std;

int main() {
    ifstream outFS;
    outFS.open("mathworksheet.txt");
    double A;
    double B;
    int mathSym;
    char sym;
    double sol;

    if ( outFS.fail() ) {
        cerr << "Error opening input file";
        return -1;
    }

    outFS >> A;
    outFS >> sym;
    outFS >> B;

    switch (sym) {
        case '+':
            sol = A + B;
            break;
        case '*':
            sol = A * B;
            break;
        case '-':
            sol = A - B;
            break;
        case '/':
            sol = A / B;
            break;
        default:
            cout << "ERROR";
            return -1;

    }

    cout << sol;




    return 0;
}
