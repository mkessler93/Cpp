#include <iostream>
#include <vector>

class User{

    std::string status = "Gold"; //impicite private!! -> default value

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status(){
            return status;
        }
        User(){
            std::cout << "default Constructor\n";
        }
        User(std::string first_name, std::string last_name){
            this->first_name = first_name;
            this->last_name = last_name;
            std::cout << "Constructor\n";
        }
        ~User(){
            std::cout << "Destructor for " << this->last_name << "\n";
        }

};

int add_user_if_not_exist(std::vector<User> &users, User user){
    for(int i = 0; i < users.size(); i++){
        if(users[i].first_name == user.first_name &&
           users[i].last_name == user.last_name){
            return i;
        }
    }
    users.push_back(user);
    return users.size() -1;
}

int main(){
    User me;
    me.first_name = "Michael";
    me.last_name = "Kessler";

    std::vector <User> users;
    
    User user1, user2, user3;
    user1.first_name = "Peter";
    user1.last_name = "Wilke";
    std::cout << user1.last_name << "\n";

    user2.first_name = "Caterina";
    user2.last_name = "Schneider";
    std::cout << user2.last_name << "\n";
 
    user3.first_name = "Peter";
    user3.last_name = "Lustig";
    std::cout << user3.last_name << "\n";

    users.push_back(user1);
    std::cout << "pushback\n";
    users.push_back(user2);
    std::cout << "pushback\n";
    users.push_back(user3);
    std::cout << "pushback\n";

    User user;
    user.last_name = "Wilke";
    user.first_name = "Peter";

    std::cout << add_user_if_not_exist(users,user) << std::endl;
    std::cout << users.size() << std::endl;

    User brother("Arthur", "Kessler");
    std::cout << brother.first_name << std::endl;

    return 0;
}