/* CSCI 261 5a: Array Input/Output
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 4
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
    int yearsArr[15];
    int i = 0;
    int given;
    int loc = 1;

    cout << "Hey! Witness my first array mojo!" << endl;
    cout << "Enter 15 numbers and I will tell you what they are." << endl;

    for (i = 0; i < 15; ++i) {
        cout << "Number " << loc << ": ";
        cin >> yearsArr[i];
        ++loc;
    }



    cout << "So awesome!" << endl;
    cout << "The numbers are: ";
    for (i = 0; i < 15; ++i) {
        cout << yearsArr[i] << " ";
    }

    cout << endl << "Have a nice day!";

    return 0;
}
