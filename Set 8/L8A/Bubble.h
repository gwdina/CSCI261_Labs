//
// Created by gwdin on 12/1/2021.
//

#ifndef MAIN_CPP_BUBBLE_H
#define MAIN_CPP_BUBBLE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;

using namespace sf;

class Bubble {
public:
    void updatePosition();
    double getX();
    double getY();
    Bubble(double xDir, double yDir);
    CircleShape getShape();


private:
    CircleShape shape;
    double xDir;
    double yDir;

};

#endif //MAIN_CPP_BUBBLE_H
