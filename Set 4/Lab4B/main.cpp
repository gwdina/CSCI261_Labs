/* CSCI 261: Fix Loop Errors
 *
 * Author: Gordon Dina
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2019 Dr. Jeffrey Paone

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

 */

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Loop World" << endl;

    // SECTION I: update comment below on how you fixed this section's code, and tests run
    // that show loop is working properly
    // FIX = replaced < with <=
    // TESTS: entered 5 got 15, entered 6 got 21, entered 3 got 6

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    int sum;      // Accumulates the total
    int i;        // Used as loop control variable
    int numIter;  // The number of times to iterate
    cout << "Enter a number greater than 1 to sum up to: ";
    cin >> numIter;
    for (i = 1; i <= numIter; ++i) {
        sum += i;
    }

    cout << "The sum of the numbers from 1 to " << numIter << " (inclusive) is: " << sum << endl;

    // SECTION II: update comment below on how you fixed this section's code, and tests run
    // that show loop is working properly
    // FIX = deleted total = 0
    // TESTS: 3 items (prices: 3.25, 2, 1.11) result was 6.36, 2 items (prices: 15.3 and 25.43) result 40.75, 5 items (prices: 1, 2, 3, 4, 5) result  15

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    double total;     // Accumulates total
    double price;     // Gets next price from user
    int numItems;     // Number of items
    int counter = 1;  // Loop control counter

    cout << "How many items do you have? ";
    cin >> numItems;
    cout << endl;

    while (counter <= numItems) {
        cout << "Enter the price of item " << counter << ": ";
        cin >> price;
        cout << endl;
        total = total + price;
        counter++;
    }
    cout << "The total price is: " << total << endl;
    //error: it's taking the last price as the total

    // SECTION III: update comment below on how you fixed this section's code, and tests run
    // that show loop is working properly
    // FIX = replaced (counter2 <= sum2) with (counter2 <= numIter2), and add ++counter2 so it would be a infintite loop
    // TESTS: put 5 got 15, put 6 got 21, put 15 got 120

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    int sum2 = 0;
    int counter2 = 1;
    int numIter2;

    cout << "What number do you wish me to sum to?" << endl;
    cin >> numIter2;

    do {
        sum2 += counter2;
        cout << "Sum so far: " << sum2 << endl;
        ++counter2;
    } while (counter2 <= numIter2);
    //sum2 += counter2, counter2 <= sum2
    cout << endl << "Section III Recap" << endl;

    cout << "I calculated the sum of numbers from 1 to " << numIter2 << " (inclusive) as " << sum2 << endl;
    // infite loop

    // SECTION IV: update comment below on how you fixed this section's code, and tests run
    // that show loop is working properly
    // FIX = replaced i3++ with --i3
    // TESTS: input 2 got 4, input 4 got 30, input 7 got 140

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of squares from 1 to ? (inclusive)" << endl;
    // same as sum but each number is squared
    int numIter3;
    cin >> numIter3;

    int sum3 = 0;
    for (int i3 = numIter3; i3 > 0; --i3) {
        sum3 += (i3 * i3);
    }

    cout << "The sum of squares from 1 to " << numIter3 << " is: " << sum3 << endl;

    // SECTION V: update comment below on how you fixed this section's code, and tests run
    // that show loop is working properly
    // FIX = replaced 10 with numIter and put counter4++ in while loop, put <= instead of <
    // TESTS: input 2 output 9, input 5 output 225, input 4 output 100

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of cubes from 1 to ? (inclusive)" << endl;

    int numIter4;
    cin >> numIter4;

    int sum4 = 0;
    int counter4 = 1;

    while (counter4 <= numIter4) {
        sum4 += (counter4 * counter4 * counter4);
        counter4++;
    }



    cout << "The sum of cubes from 1 to " << numIter4 << " is: " << sum4 << endl;

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}

