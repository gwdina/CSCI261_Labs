/* CSCI 261 Lab3C: Lab 3C - Pretty Math Solver
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
#include <iomanip>
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
    outFS.close();

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

    if (A < 0){
        cout << setw(10) << setfill(' ') << setprecision(3) << fixed << A << endl;
    }
    else {
        cout << setw(11) << setfill(' ') << setprecision(3) << fixed << A << endl;
    }

    if (B < 0){
        cout << '*' << setw(10) << setfill(' ') << setprecision(3) << fixed << B << endl;
    }
    else {
        cout << '*' << setw(11) << setfill(' ') << setprecision(3) << fixed << B << endl;
    }
    cout << setfill('=') << setw(11) << "" << endl;


    //if (sol < 0);




    cout << setw(11) << setfill(' ') << sol;




    return 0;
}