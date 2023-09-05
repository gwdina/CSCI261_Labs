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
    /** @brief checks if the bubble hits the walls and reverses it's direction and returns the new positsion of the bubble
   * @return the new positsion of the bubble
   */
    void updatePosition();
    /** @brief return the x coord
   * @return the x coord
   */
    double getX();
    /** @brief return the y coord
   * @return the y coord
   */
    double getY();
    /** @brief creates a default calculator
  * @desc Creates a default calculator to set _xDir, _yDir, radius, posistion, and color of the bubbles
  */
    Bubble();
    /** @brief return indicator for the circle
   * @return the indicator for the circle
   */
    CircleShape getShape();
    /** @brief new bubble location
   * @desc sets the new bubble posistion according to the coords of the mouse click
   * @param LHS the x coord for the mouse click
   * @param RHS the y coord for the mouse click
   */
    void setPosition(double x, double y);


private:
    CircleShape _shape;
    double _xDir;
    double _yDir;

};

#endif //MAIN_CPP_BUBBLE_H
