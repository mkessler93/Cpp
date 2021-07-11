#include <iostream>
#include <cmath>
#include <climits>
#include <string>

using std::cout;
#define X 10 //Macros

double power(double base, int exponent) {
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result *= base;
    }
    return result;
}

void print_pow(double base, int exponent){


    std::cout << base << " raised to the power of " << exponent << " is: " << power(base,exponent) << std::endl;
}

int main() {
    std::string s; 
    cout << s + " there" << std::endl;
    cout << s.length() << std::endl;
}