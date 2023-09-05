/* CSCI 261 Lab 2 A: RPS: Human vs. Computer part 1
 *
 * Author: Gordon Dina
 * Skip Days Used: 0
 * Skip Days Remaining: 5
 * Resources used ():
 *     /
 *
 *
 * rock, paper, scissors match against computer, the computer will choose at random (range: 0-2)
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    rand();
    char playerChoose;


    cout <<  "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
    cout << "Player: ";
    cin >> playerChoose;

    cout << endl;



    cout << "Player choose " << playerChoose << endl;

    cout << "Computer choose " << rand() % 3;
    return 0;
}
