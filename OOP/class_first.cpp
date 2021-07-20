#include <iostream>
#include <vector>

class User{

    std::string status = "Gold"; //impicite private!!

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status(){
            return status;
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

    user2.first_name = "Caterina";
    user2.last_name = "Schneider";

    user3.first_name = "Peter";
    user3.last_name = "Lustig";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.last_name = "Peter";
    user.first_name = "Wilke";

    std::cout << add_user_if_not_exist(users,user) << std::endl;
    std::cout << users.size() << std::endl;
    
    return 0;
}