#include <iostream>
#include <array>
#include <vector>

int main(){
    int data[] = {1,2,3,4,5,6};

    for(int i = 0; i < 6; i++){
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;

    //range for loop (c++11) --> used for collection like array & vectors
    for(int n : data){ //can also use auto
        std::cout << n << "\t";
    }
    std::cout << "\n";
    return 0;
}