#include <iostream>
#include <vector>

class User{
    static int user_count;
    std::string status = "Gold"; //impicite private!! -> default value
    
    public:
        static int get_user_count(){
            return user_count;
        }

        std::string first_name;
        std::string last_name;
        std::string get_status(){
            return status;
        }

        void set_status(std::string status){
            if(status == "Gold" || status == "Silver" || status == "Bronze"){
            this->status = status;
            }
            else{
                this->status = "No Status";
            }
        }

        User(){
            std::cout << "default Constructor\n";
            user_count++;
        }
        User(std::string first_name, std::string last_name){
            this->first_name = first_name;
            this->last_name = last_name;
            std::cout << "Constructor\n";
            user_count++;
        }
        ~User(){
            std::cout << "Destructor for " << this->first_name << "\n";
            user_count--;
        }
        friend void output_status(User user); //only declaration!! definition outside
        friend std::ostream& operator << (std::ostream& output, User user);
        friend std::istream& operator >> (std::istream& input, User& user);
};

int User::user_count = 0; //static variables need to be defined outside of class for memory allocation

void output_status(User user){
    std::cout << user.status << "\n";
}

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

std::ostream& operator << (std::ostream& output, User user){
    // insertion operator
    output << "First name: " << user.first_name << "\tLast name: " << user.last_name 
    << "\nStatus: " << user.status << "\n";
    return output;
}

std::istream& operator >> (std::istream& input, User& user ){
    //extraction operator
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

int main(){
    User me;
    me.first_name = "Michael";
    me.last_name = "Kessler";
    me.set_status("Wood");

    std::cout << "Status of " << me.first_name << ": " << me.get_status() << "\n";

    std::vector <User> users;
    /*
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
    
    std::cout << "User count: " << User::get_user_count() << "\n";
    User brother("Arthur", "Kessler");
    std::cout << brother.first_name << std::endl;
    std::cout << "User count: " << User::get_user_count() << "\n";
    me.~User();
    std::cout << "User count: " << User::get_user_count() << "\n";
    
    std::cout << brother << std::endl;
    User user;
    std::cin >> user;
    std::cout << user;
    */

    User user;
    /*
    user.first_name = "Eugen";
    user.last_name = "Kessler";
    user.set_status("Silver");
    */
    std::cin >> user;
    output_status(user);
    std::cout << user;

    return 0;
}