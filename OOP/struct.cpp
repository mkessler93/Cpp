#include <iostream>

struct User{


    
    std::string first_name;
    std::string last_name;
    std::string get_status(){

        return status;
    }
    private:
        std::string status = "Gold";


};

int main(){
    User user1;
    user1.first_name = "Michael";
    user1.last_name = "Kessler";

    std::cout << "First name:\t" << user1.first_name << "\n";
    std::cout << "Status:\t" << user1.get_status() << "\n";

    return 0;
}

//struct members are by default public
// --> structs rule of thumb PODS (plain old data struct) contain mostly variables
//class members are by default private