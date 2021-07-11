#include <iostream>
#include <array>

//<> indicate templates or generic programming, see Vecotr or STL arrays
void print_array(std::array<int,5> data){

    
    for(int i =0; i< data.size(); i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}
int main(){
    const int size = 5;
    std::array<int,size> stl = {1,2,3,4,5};
    print_array(stl);
    return 0;
}