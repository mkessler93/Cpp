#include <iostream>
#include <vector>

//dynamic 
void print_vector(std::vector<int> data){
    //data is only a copy of item, so any changes on data don't apply to item!!
    //if you pass by reference (memoryadress gets passed) you change item and not data!!
    //call by reference: void print_vector(std::vector<int> &data){}
    data.push_back(23);
    for(int i =0; i< data.size(); i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";

}
int main(){
    std::vector<int> item = {12,13,1};
    item.push_back(3);
    item.pop_back();
    print_vector(item);
    print_vector(item);
    return 0;
}