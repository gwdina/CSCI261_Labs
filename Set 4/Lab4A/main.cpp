/* CSCI 261 Lab 4 A: RPS: Lab 4A - RPS: Multigame
*
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
* Resources used ():
*     /
*
*
* rock, paper, scissors match against computer, the computer will choose at random (range: 0-2), will give the name of the output; then asks if the user wants to play again
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0));
    rand();
    char playerChoose;
    string play;
    int number;
    string comput;
    char contin;

    contin = 'Y';

    while (contin == 'Y') {
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

        cout << "Computer choose " << comput << endl << endl;



        if (((play == "Paper") && (comput == "Rock")) || ((play == "Scissors") && (comput == "Paper")) || ((play == "Rock") && (comput == "Scissors"))) {
            cout << play << " beats " << comput << "." << endl;
            cout << "Human wins!" << endl;
        }
        if (((comput == "Paper") && (play == "Rock")) || ((comput == "Scissors") && (play == "Paper")) || ((comput == "Rock") && (play == "Scissors"))) {
            cout << comput << " beats " << play << "." << endl;
            cout << "Computer wins!" << endl;
        }

        else if (((play == "Paper") && (comput == "Paper")) || ((play == "Scissors") && (comput == "Scissors")) || ((play == "Rock") && (comput == "Rock"))) {
            cout << "It's a tie" << endl;
        }

        //first one determines if the human wins, second for the computer, and the last if it's a tie

        cout << endl << "Do you want to play again? (Y/N) ";
        cin >> contin;
        cout << endl;

    }

    /* cout <<  "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
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

    cout << "Computer choose " << comput << endl << endl;



    if (((play == "Paper") && (comput == "Rock")) || ((play == "Scissors") && (comput == "Paper")) || ((play == "Rock") && (comput == "Scissors"))) {
        cout << play << " beats " << comput << "." << endl;
        cout << "Human wins!" << endl;
    }
    if (((comput == "Paper") && (play == "Rock")) || ((comput == "Scissors") && (play == "Paper")) || ((comput == "Rock") && (play == "Scissors"))) {
        cout << comput << " beats " << play << "." << endl;
        cout << "Computer wins!" << endl;
    }

    else if (((play == "Paper") && (comput == "Paper")) || ((play == "Scissors") && (comput == "Scissors")) || ((play == "Rock") && (comput == "Rock"))) {
        cout << "It's a tie" << endl;
    }

    //first one determines if the human wins, second for the computer, and the last if it's a tie

    cout << endl << "Do you want to play again? (Y/N) ";
    cin >> contin;
    cout << endl;




    return 0;
*/}
