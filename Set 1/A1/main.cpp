/* CSCI 261 Assignment 1: Hello World and ASCII Art
 *
 * Author: Gordon Dina
 * Skip Days Used: 0
 * Skip Days Remaining: 5
 * Resources used (Look back at ZyBook):
 *
 *
 *
 * making a Smile face with ASCII art, some info about me
 */


#include <iostream>


using namespace std;




int main() {
    int age;
    int bonesBroken;
    char germany;


// produces nice smile
    cout << "  **********" << endl;
    cout << " * /\\     /\\ *" << endl;
    cout << "*   \\_____/   *" << endl;
    cout << " *************" << endl;

    cout << "Hello Worlds" << endl;

    cout << "How old are You? ";
    cin >> age;

    cout << "How many bones did you break? "; // I broke no bones
    cin >> bonesBroken;

    cout << "Did you live in Germany?(Y/N) "; //Can't store a word so Y/N is more simple solution
    cin >> germany;

    cout << endl << endl;
    cout << "I am " << age << " years old." << endl;
    cout << "I broke " << bonesBroken << " bones." << endl;
    cout << "Lived in Germany: "<< germany << endl; // is both friendly if the person said Y or N



    cout << "Goodbye";

    return 0;
}




