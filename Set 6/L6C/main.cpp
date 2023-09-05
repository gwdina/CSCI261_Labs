/* CSCI 261: Fix Function Errors
 *
 * Author: Gordon Dina
 *
 *    This program illustrates a variety of common function errors.
 *    Fix the errors in each section.

Copyright 2021 Dr. Jeffrey Paone

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

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

/// \desc adds five to the given parameter
/// \param x integer to be added to
/// \returns nothing
int addFive( int x ) {
    x += 5;
    return x;

}

/// \desc generates a single random number
/// \returns a random number
int generateRandomNumber() {
    return rand() % 100;
}

void printSmileyFace(){

    cout << "  **********" << endl;
    cout << " * /\\     /\\ *" << endl;
    cout << "*   \\_____/   *" << endl;
    cout << " *************" << endl;

}



/// \desc sums three integer values
/// \param x first value to be added
/// \param y second value to be added
/// \param z third value to be added
/// \returns the sum of all three parameters
int sum_int( int x, int y, int z ) {
    return x + y + z;
}

/// \desc sums three double values
/// \param x first value to be added
/// \param y second value to be added
/// \param z third value to be added
/// \returns the sum of all three parameters
double sum_double(double x, double y, double z) {
    return y + x + z;
}

/// \desc multiplies two doubles together
/// \param a first value to multiply
/// \param b second value to multiply
/// \returns the product of the two double parameters
double multiply( double a, double b ){
    return a * b;
}

/// \desc Recursive solution to move N disks from a starting peg to a destination peg
/// \desc Outputs the series of moves to solve the problem for N disks
/// \param N the number of disks to move
/// \param start ID of the peg the disks are currently on
/// \param target ID of the peg the disks need to move to
/// \param spare ID of the peg that can be used as temporary storage
/// \returns nothing
void towersOfHanoi( int N, int start, int target, int spare ) {
    // if there are no more disks to move, then we are done!,
    if( N == 1 ) {
        cout << "Move disk " << N << " from " << start << " to " << target << endl;
        return;
    }

    // Step 1: recursively move the top N-1 disks from our current peg
    // to the non-target peg
    towersOfHanoi(N - 1, start, spare, target);


    // Step 2: move the largest disk that was on the bottom from our
    // current peg to the target peg
    cout << "Move disk " << N << " from " << start << " to " << target << endl;

    // Step 3: recursively move the remaining N-1 disks from the non-target
    // peg to our target peg on top of the largest disk we just moved
    towersOfHanoi(N - 1, spare, target, start);
}

int main() {
    srand( time(0) );
    cout << "Welcome to Function World" << endl;

    // SECTION I: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = switch function from void to int and have it return x, and set numTrees equal to function using numTrees
    // TESTS: 4 = 9, 5 = 10, 3 = 8

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    int numTrees;
    cout << "How many trees do you currently have? ";
    cin >> numTrees;
    cout << "There are initially " << numTrees << " trees." << endl;
    numTrees = addFive( numTrees );
    cout << "We planted five trees, there are now " << numTrees << " trees." << endl;

    // SECTION II: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = made a printSmileyFace function using the smile face from A1
    // TESTS: ran it 3 times

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    printSmileyFace();

    // SECTION III: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = moved srand into main()
    // TESTS: ran 3 times: 10 12 40 44 47,54 49 39 23 74,76 45 87 28 37

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    cout << "Five different random numbers are: " << endl;
    for( int i = 0; i < 5; i++ ) {
        cout << "\t" << generateRandomNumber() << endl;
    }


    // SECTION IV: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = was adding 3 x's and not y and z, removed the 2nd and 3rd x and replaced with y and z, add num3 to the function, and renamed the function to sum_int
    // TESTS: 1 2 3 = 6, 4 4 4 = 12, 5 10 20 = 35

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    int num1, num2, num3;
    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of all three is " << sum_int( num1, num2, num3) << endl;

    // SECTION V: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = added () to the end of gengenerateRandomNumber function used in the sections
    // TESTS: ran 3 times: 63, 36, 27

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "Another random number is " << generateRandomNumber() << endl;

    // SECTION VI: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = ; was used instead of {} and 'a' and 'b' were not multiplied, {} was and added and the function will return with 'a * b'
    // TESTS: 2.5 2.3 = 5.75, 3.3 3.4 = 11.22, 1.2 7.6 = 9.12

    cout << endl;
    cout << "******************" << endl;
    cout << "Section VI" << endl;
    cout << "******************" << endl;

    double doub1, doub2;
    cout << "Enter two doubles: ";
    cin >> doub1 >> doub2;
    cout << "Their product is: " << multiply( doub1, doub2 ) << endl;

    // SECTION VII: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = was int instead of double, was adding 3 y's and not x and z, removed the 2nd and 3rd y and replaced with x and z, renamed to sum_double, and added int doulb1/2 and remaned doub to doulb
    // TESTS: 1.1 2.2 3.3 = 6.6, 4.4 4.4 4.4 = 13.2, 4.3 6.9 3.5 = 14.7

    cout << endl;
    cout << "******************" << endl;
    cout << "Section VII" << endl;
    cout << "******************" << endl;

    double doulb1, doulb2, doulb3;
    cout << "Enter three double numbers: ";
    cin >> doulb1 >> doulb2 >> doulb3;
    cout << "The sum of all three is " << sum_double( doulb1, doulb2, doulb3 ) << endl;

    // SECTION VIII: update comment below on how you fixed this section's code, and tests run
    // that show function is working properly
    // FIX = add some recursive functions to the function
    // TESTS: 3 disks gave 7 moves, 4 disks gave 15 moves, 2 disks gave 3 moves

    cout << endl;
    cout << "******************" << endl;
    cout << "Section VIII" << endl;
    cout << "******************" << endl;

    const int STARTING_PEG = 0;         // 0 - ID of the peg our disks start on
    const int TARGET_PEG = 2;           // 2 - ID of the peg we need to move our disks to
    const int SPARE_PEG = 1;            // 1 - ID of the peg that can be used for temp storage

    int numberOfDisks;
    cout << "Enter number of disks to solve: ";
    cin >> numberOfDisks;               // user enters the number of disks to solve for

    // solve Towers of Hanoi problem for numberOfDisks disks
    // disks are initially on our starting peg and need to move to our target peg
    towersOfHanoi( numberOfDisks, STARTING_PEG, TARGET_PEG, SPARE_PEG );

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}
