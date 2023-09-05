/* CSCI 261 6b: Polar to Cartesian
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 4
* Resources used ():
*     /
*
*
* turning Cartesian to Polar and vise versa
 *
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct CartesianPoint{
    double x;
    double y;

};

struct PolarCoordinate {
    double radius;
    double theta;

};
CartesianPoint polarToCartesianPBV (const PolarCoordinate inParam ){
    CartesianPoint total;
    total.x = inParam.radius * cos((inParam.theta * M_PI) / 180);
    total.y = inParam.radius * sin((inParam.theta * M_PI) / 180);
    return total;

}

PolarCoordinate cartesianToPolarPBV (const CartesianPoint inParam){
    PolarCoordinate result;
    result.radius = sqrt(inParam.x * inParam.x + inParam.y * inParam.y);
    result.theta = (atan2(inParam.y, inParam.x) * 180) / M_PI;
    return result;

}

void polarToCartesianPBR (const double radius, const double theta, double& x, double& y){
    x = radius * cos((theta * M_PI) / 180 );
    y = radius * sin((theta * M_PI) / 180 );

}

void cartesianToPolarPBR (const double x, const double y, double& radius, double& theta){
    radius = sqrt((x * x) + (y * y));
    theta = (atan2(y, x) * 180) / M_PI;

}

int main() {
    int choose;
    double radius;
    double theta;
    double x;
    double y;

    cout << "Do you want to convert: 1. (r, θ) -> (x, y), or 2. (x, y) -> (r, θ)" << endl;
    cout << ": ";
    cin >> choose;

    if (choose == 1){
        PolarCoordinate point;
        cout << "Enter radius and theta." << endl << "radius: ";
        cin >> point.radius;
        cout << "theta: ";
        cin >> point.theta;

        CartesianPoint conveted;

        conveted = polarToCartesianPBV(point);

        cout << "Pass-by-Value (x,y): " << "("<< conveted.x << ", " << conveted.y << ")" << endl;

        polarToCartesianPBR(point.radius, point.theta, conveted.x, conveted.y);

        cout << "Pass-by-Reference (x,y): " << "("<< conveted.x << ", " << conveted.y << ")" << endl;








    }

    if (choose == 2){
        CartesianPoint point;
        cout << "Enter x and y." << endl << "x: ";
        cin >> point.x;
        cout << "y: ";
        cin >> point.y;

        PolarCoordinate conveted;

        conveted = cartesianToPolarPBV(point);

        cout << "Pass-by-Value (r,0): " << "(" << conveted.radius << ", " << conveted.theta << ")" << endl;

        cartesianToPolarPBR(point.x, point.y, conveted.radius, conveted.theta);

        cout << "Pass-by-Reference (r,θ): " << "("<< conveted.radius << ", " << conveted.theta << ")" << endl;

    }




    return 0;
}
