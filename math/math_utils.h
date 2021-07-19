#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle {

    double length;
    double width;
};


double pow(double base, int pow = 2);

double area(double length, double width);

double area(double length);

double area(Rectangle rect);

#endif
