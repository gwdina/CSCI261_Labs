/* CSCI 261 lab5c: Array of Structures
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 4
* Resources used ():
*     /
*
*
* getting info for books that are put into an array
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

struct Book {
    string bookTitle;
    string bookAuthor;
    float bookCost;
    int bookYear;
};

int main() {
    Book Books[5];
    int askUser;


    cout << "Enter title, author, book cost, and year:" << endl;
    cout << endl;

    for(int i = 0; i < 5; ++i) {
        cout << "Title " << i + 1 << ": ";
        getline(cin, Books[i].bookTitle);


        cout << "Author " << i + 1 << ": ";
        getline(cin, Books[i].bookAuthor);



        cout << "Cost " << i + 1 << ": ";
        cin >> Books[i].bookCost;



        cout << "Year " << i + 1 << ": ";
        cin >> Books[i].bookYear;
        cout << endl;

    }
    // cout << Books[0].bookTitle << Books[0].bookAuthor << Books[0].bookCost << Books[0].bookYear ;


    cout << "Which number(1-5) book would like info on? ";
    cin >> askUser;

    switch (askUser) {

        case 1:
            cout << Books[0].bookTitle << ", by ";
            cout << Books[0].bookAuthor << ", $";
            cout << Books[0].bookCost << ", ";
            cout << Books[0].bookYear;
            break;
        case 2:
            cout << Books[1].bookTitle << ", by ";
            cout << Books[1].bookAuthor << ", $";
            cout << Books[1].bookCost << ", ";
            cout << Books[1].bookYear;
            break;

        case 3:
            cout << Books[2].bookTitle << ", by ";
            cout << Books[2].bookAuthor << ", $";
            cout << Books[2].bookCost << ", ";
            cout << Books[2].bookYear;
            break;

        case 4:
            cout << Books[3].bookTitle << ", by ";
            cout << Books[3].bookAuthor << ", $";
            cout << Books[3].bookCost << ", ";
            cout << Books[3].bookYear;
            break;

        case 5:
            cout << Books[4].bookTitle << ", by ";
            cout << Books[4].bookAuthor << ", $";
            cout << Books[4].bookCost << ", ";
            cout << Books[4].bookYear;
            break;
        default:
            cout << "Enter a number in the range of 1-5";
            break;
    }

    return 0;
}
