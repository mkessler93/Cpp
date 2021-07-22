#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
int countUniques(std::vector<T> const & one, std::vector<T> const & two){
    int num_uniques = 0;
    for(const auto i: one){
        int sum = 0;
        sum = std::count(two.begin(), two.end(), i);
        if(sum == 0){
            ++num_uniques;
        }
    }
    for(const auto i: two){
        int sum = 0;
        sum = std::count(one.begin(), one.end(), i);
        if(sum == 0){
            ++num_uniques;
        }
    }
    
    return num_uniques;
}

int main(){
    std::vector<int> one {1,2,3,4,5,6};
    std::vector<int> two {5,6,7,8,9};

    std::cout << "uniques: "<< countUniques(one, two) << std::endl;
    return 0;
}