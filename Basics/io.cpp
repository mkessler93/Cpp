#include <iostream>
#include <fstream>
#include <vector>

int main(){
    /*
    std::string filename;
    std::cin >> filename;
    std::ofstream file; //std::ofstream file("hello.txt")
    file.open(filename.c_str(), std::ios::app); //txt not neccesary for linux //std::ios::app makes sure you dont override old stuff
    

    if(file.is_open()){
        std::cout << "opened successfull! \n";
    }
    
    std::vector<std::string> names;
    names.push_back("Peter");
    names.push_back("Jürgen");
    names.push_back("Hans");

    for(std::string name : names){
        file << name <<std::endl;
    }
    file.close(); //only to force the closing
    */
    //read from file
    /*
    std::ifstream file1("text.txt");

    std::vector<std::string> names1;
    std::string input;
    while(file1 >> input){
        names1.push_back(input);
    }
    for(std::string name : names1){
        std::cout << name << std::endl;
    }
    */
    std::ifstream test("text.txt");

    if(test.is_open()){
        std::cout << "it worked!\n";
    }
    std::string wilke;
    getline(test, wilke);
    std::cout << wilke << std::endl;
    
    return 0;
}