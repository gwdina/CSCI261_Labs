//
// Created by gwdin on 11/29/2021.
//

#include "Star.h" // include the file with the corresponding prototypes

star::star(double xCoords, double yCoords, double brightness) {
    this-> xCoords = xCoords;
    this-> yCoords = yCoords;
    this-> brightness = brightness;
}

double star::getX(){
    return xCoords;
}

double star::getY(){
    return yCoords;
}

double star::getBright(){
    return brightness;
}

star::star() {  // Default constructor
    xCoords = 0;
    yCoords = 0;
    brightness = 0;
}
float star::getTransformedX(int const WIDTH, double xStar) {
    return ( xStar + 1 ) * WIDTH / 2;
}

float star::getTransformedY(int const HEIGHT, double yStar){
    return ( -yStar + 1 ) * HEIGHT / 2;
}

int star::getGrayscaleColor(double brightness , double maxBright){
    return maxBright - ( 255.0 * brightness ) / maxBright ;

}