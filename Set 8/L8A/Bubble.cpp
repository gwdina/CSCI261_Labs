//
// Created by gwdin on 12/1/2021.
//

#include "Bubble.h"

CircleShape Bubble:: getShape(){
    return shape;
}
double Bubble::getX(){
    return xDir;
}

double Bubble::getY(){
    return yDir;
}
void Bubble::updatePosition(){
    double newX;
    double newY;

    if((shape.getPosition().x > 640-shape.getRadius()) ||(shape.getPosition().x < 0)){
        xDir *= -1;
    }
    if((shape.getPosition().y > 640-shape.getRadius()) ||(shape.getPosition().y < 0)){
        yDir *= -1;
    }

    newX = shape.getPosition().x + xDir;
    newY = shape.getPosition().y + yDir;
    shape.setPosition(newX, newY);

}

Bubble::Bubble(double xDir, double yDir){
    this->xDir = xDir;
    this->yDir = yDir;
    shape.setRadius(5);
    shape.setPosition(300, 300);
    shape.setFillColor(Color::White);
}