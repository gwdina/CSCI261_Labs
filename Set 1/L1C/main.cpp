/* CSCI 261 Lab 1C : Math equations
 *
 * Author: Gordon Dina and Jake Wharton
 *
 * Finds the volume of a sphere and pressure from gas constant
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

int main() {
    const double pi = 3.14; // constants that will be used later for their respected formulas
    const double gasCon = 8.3145;

    double sphereRadius;
    double gasVolume;
    double subAmount;
    double temp;

    double sphereVolume;
    double pressure;

    cout << "Enter the radius: ";
    cin >> sphereRadius;
    sphereVolume = (4 / 3) * pi * (sphereRadius * sphereRadius * sphereRadius);
    cout << "The volume is: " << sphereVolume << endl;

// top one find the volume of a sphere while the bottom one finds the pressure from ideal gas law

    cout << "Enter the volume: ";
    cin >> gasVolume;
    cout << "Enter the substance amount: ";
    cin >> subAmount;
    cout << "Enter tempature: ";
    cin >> temp;
    pressure = (subAmount * gasCon * temp) / gasVolume;
    cout << "The pressure is: " << pressure;

    return 0;
}