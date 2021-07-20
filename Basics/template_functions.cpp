#include <iostream>
#include <string>

template <typename T>

void swap(T &a, T &b){

    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size){
    for(int i = 0; i < size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;

    }

}

int main(){
    int a = 10;
    int b = 20;

    swap(a,b);

    std::cout << "a:\t" << a << std::endl;
    std::cout << "b:\t" << b << std::endl;

    std::string first_name = "Michael";
    std::string last_name = "Kessler";

    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;
    
    int size = 4;
    int nines[] = {9,9,9,9};
    int ones[] = {1,1,1,1};
    swap(nines,ones,4);

    std::cout << "nines[]: ";
    for(int i = 0; i < size; i++){
        std::cout << nines[i] << "\t";

    }
    return 0;
}