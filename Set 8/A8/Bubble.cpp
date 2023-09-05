//
// Created by gwdin on 12/1/2021.
//

#include "Bubble.h"

CircleShape Bubble:: getShape(){
    return _shape;
}
double Bubble::getX(){
    return _xDir;
}

double Bubble::getY(){
    return _yDir;
}
void Bubble::updatePosition(){
    double newX;
    double newY;

    if((_shape.getPosition().x > 640- _shape.getRadius()) ||(_shape.getPosition().x < 0)){
        _xDir *= -1;
    }
    if((_shape.getPosition().y > 640- _shape.getRadius()) ||(_shape.getPosition().y < 0)){
        _yDir *= -1;
    }

    newX = _shape.getPosition().x + _xDir;
    newY = _shape.getPosition().y + _yDir;
    _shape.setPosition(newX, newY);

}

Bubble::Bubble(){
    _xDir = (rand() / (double) RAND_MAX) * 2.5;
    _yDir = (rand() / (double) RAND_MAX) * 2.5;
    _shape.setRadius(rand() % 40 + 10);
    _shape.setPosition(rand() % 300 + 100, rand() % 300 + 100);
    _shape.setFillColor(Color(rand() % 256, rand() % 256, rand() % 256));
}
void Bubble::setPosition(double x, double y){
    _shape.setPosition(x,y);
}