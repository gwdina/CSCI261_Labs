/* CSCI 261 Lab4c: Lab 4C - Input Paradigms to Compute Averages
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
* Resources used ():
*     /
*
* ask the user which type of file they would like to process. Then open the corresponding file and calculate the average value in the file.
*
*/




#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

// inFS.close();

int main() {
    int chooser;
    double i;
    double sum = 0;
    double numIter;
    double currentNum;
    int n;

    cout << "Which file would you like to open?" << endl;
    cout << "1. Counter Controlled" << endl;
    cout << "2. Sentinel Controlled" << endl << "> ";
    cin >> chooser;

    if (chooser == 1) {
        ifstream inFS;
        inFS.open("counter_controlled.txt");
        inFS >> numIter;
        if (!inFS.is_open()) {
            cout << "Could not open file counter_controlled.txt." << endl;
            return 1; // 1 indicates error

        }
        cout << "There are " << numIter << " values in the file." << endl;
        cout << "The values in the file are:" << endl;
        for (i = 0; i < numIter; ++i) {
            inFS >> currentNum;
            cout << currentNum << endl;
            sum += currentNum;
            ++n;

        }
        cout << "The average is " << sum / n << ".";
        inFS.close();
    }
    else if (chooser == 2) {
        ifstream other;
        other.open("sentinel_controlled.txt");
        if (!other.is_open()) {
            cout << "Could not open file sentinel_controlled.txt." << endl;
            return 1; // 1 indicates error

        }
        cout << "The values in the file are:" << endl;
        while (i != -9999) {
            other >> numIter;
            if (numIter == -9999){
                break;
            }
            cout << numIter << endl;
            i = numIter;
            ++n;
            sum += numIter;
        }
        cout << "There are " << n << " values in the file." << endl;
        cout << "The average is " << sum / n << ".";
        other.close();
    }
    return 0;
}