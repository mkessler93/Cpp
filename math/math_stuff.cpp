#include <iostream>
#include "math_utils.h"

int main(){
        Rectangle rect;
    rect.length = 10;
    rect.width = 10;

    std::cout << area(rect.length, rect.width) << std::endl;
    std::cout << area(rect.length) << std::endl;
    std::cout << area(rect) << std::endl;

    std::cout << "Pow:" << pow(3,3) << std::endl;
    std::cout << "Pow:" << pow(3) << std::endl;
    return 0;
}