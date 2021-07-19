#include <iostream>

struct Rectangle {

    double length;
    double width;
};


double pow(double base, int pow = 2){ //pow default value is 2
    std::cout << base << "**" << pow << "\t";
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

void do_smth(int a){

    std::cout << "did something" << std::endl;
}

void do_smth(std::string s){

    std::cout << s << std::endl;
}

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

    