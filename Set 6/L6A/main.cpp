/* CSCI 261 6A: Yahtzee!
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 4
* Resources used ():
*     /
*
*
* Yahtzee, is threes, score threes, is three kind, score three kind
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
bool isThrees( int die1, int die2, int die3, int die4, int die5 ) {

    if ((die1 == 3) || (die2 == 3) || (die3 == 3) || (die4 == 3) || (die5 == 3)){
        return true;
    }
    else {
        return false;
    }

}
int scoreThrees( int die1, int die2, int die3, int die4, int die5 ) {
    int score = 0;
    int dice[5] = {die1, die2, die3, die4, die5};
    int total;
    int grab[6];

    for(int i = 1; i < 6; ++i){
        total = 0;
        int n = 0;
        for(int j =0; j < 6; ++j){
            if (dice[j] == 3) {
                total += 3;
            }
            else {
                continue;
            }
        }
        grab[n] = total;
        score = grab[n];
        ++n;
    }
    return score;
}

bool isThreeKind( int die1, int die2, int die3, int die4, int die5 ) {
    int dice[5] = {die1, die2, die3, die4, die5};
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    bool yes = false;


    for(int i = 0; i < 5; ++i){
        if (dice[i] == 1){
            ++one;
        }
        else if (dice[i] == 2){
            ++two;
        }
        else if (dice[i] == 3){
            ++three;
        }
        else if (dice[i] == 4){
            ++four;
        }
        else if (dice[i] == 5){
            ++five;
        }
        else if (dice[i] == 6){
            ++six;
        }

        if ((one == 3) || (two == 3) || (three == 3) || (four == 3) || (five == 3) || (six == 3)){
            yes = true;
            exit;
        }
    }
    return yes;
}
int scoreThreeKind( int die1, int die2, int die3, int die4, int die5 ) {
    int dice[5] = {die1, die2, die3, die4, die5};
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int score = 0;



    for(int i = 0; i < 5; ++i){
        if (dice[i] == 1){
            ++one;
        }
        else if (dice[i] == 2){
            ++two;
        }
        else if (dice[i] == 3){
            ++three;
        }
        else if (dice[i] == 4){
            ++four;
        }
        else if (dice[i] == 5){
            ++five;
        }
        else if (dice[i] == 6){
            ++six;
        }

    }
    if ((one >= 3) || (two >= 3) || (three >= 3) || (four >= 3) || (five >= 3) || (six >= 3)){
        for(int i = 0; i < 5; ++i){
            score += dice[i];
        }
    }
    return score;
}



int main() {










    return 0;
}
