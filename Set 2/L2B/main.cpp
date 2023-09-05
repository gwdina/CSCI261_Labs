/* CSCI 261 Lab 2 B: RPS: Human vs. Computer part 2
*
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
* Resources used ():
*     /
*
*
* rock, paper, scissors match against computer, the computer will choose at random (range: 0-2), will give the name of the output
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    rand();
    char playerChoose;
    string play;
    int number;
    string comput;



    cout <<  "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
    cout << "Player: ";
    cin >> playerChoose;

    cout << endl;

    if ((playerChoose == 'p') || (playerChoose == 'P')) {
        play = "Paper";
    }
    if ((playerChoose == 'r') || (playerChoose == 'R')) {
        play = "Rock";
    }
    if ((playerChoose == 's') || (playerChoose == 'S')) {
        play = "Scissors";
    }

    number = rand() % 3;

    switch (number) {
        case 0:
            comput = "Rock";
            break;
            case 1:
                comput = "Paper";
                break;
                case 2:
                    comput = "Scissors";
                    break;
    }
// takes random number and uses switch to get output



    cout << "Player choose " << play << endl;

    cout << "Computer choose " << comput;
    return 0;
}