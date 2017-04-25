#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

Point::Point(float _x, float _y){
    x=_x;
    y=_y;
}

Point::~Point(){
    // não faz nada ao ser destruido
}

void Point::setX(float _x){
    x=_x;
}

void Point::setY(float _y){
    y=_y;
}

void Point::setXY(float _x, float _y){
    x=_x;
    y=_y;
}

float Point::getX(){
    return x;
}

float Point::getY(){
    return y;
}

void Point::add(Point p1){
    x=x+p1.x;
    y=y+p1.y;
}

void Point::sub(Point p1){
    x=x-p1.x;
    y=y-p1.y;
}

float Point::norma(){
    return (sqrt(x*x+y*y));
}

void Point::translada(float a, float b){
    x=x+a;
    y=y+b;
}

void Point::imprime(){
    cout << "(" << x << ", " << y << ")\n";
}
