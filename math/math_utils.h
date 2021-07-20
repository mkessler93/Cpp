#ifndef MATH_UTILS_H
#define MATH_UTILS_H

struct Rectangle {

    double length;
    double width;
};


double pow(double base, int pow = 2);

double area(double length, double width);

double area(double length);

double area(Rectangle rect);

#endif
