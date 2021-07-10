#include <iostream>

void print_array(int array[], int size){
    std::cout << size << std::endl;
    //returns size of a intpointer if not declared in function

}

int main(){
    //vectors are known in other languages as lists or arraylists
    //templatized array --> array wrapped in a object

    int arr[] = {7,2,6,7,1}; // or int arr[] = {10,20,32, ...}
    int size = sizeof(arr);
    std::cout << size << " bytes \n";

    print_array(arr, 5);


    return 0;
}