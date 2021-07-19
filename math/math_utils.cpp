#include <iostream>
#include <math_utils.h>



double pow(double base, int pow ){ //pow default value is 2
    std::cout << base << "**" << pow << "\t" << std::endl;
    int total = 1;
    for(int i=0; i < pow; i++){
        total *= base;
    }
    return total;
}

double area(double length, double width){ //rectangle

    return length * width;
}

double area(double length){ //square
    return length * length;
}

double area(Rectangle rect){

    return rect.length * rect.width;
}


