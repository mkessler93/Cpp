#include <iostream>
#include <string>



void control_for_while(){
    /*
    I nitialize -> int i = 0;
    C condition -> while(i < 10);
    U pdate     -> i++; | i += 1;
    --> for(int i = 0; i < 10; i++){}
    */

   
}


void controlif(){
    int age =12;
    std::cin >> age;
    if(age < 13){
        std::cout << "You're not old enough \n";
        
    }

    else if(age < 19){
        std::cout << "nice";
    }

    else {
    std::cout << "False\n";
    }
}

void controlswitch(){

    enum class Season{summer, spring, fall, winter};
    Season now = Season::winter;
    
    switch(now){
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            break;
        default:
            break;
    }
    
    int age = 13;
    switch(age){

        case 13:
            std::cout << "bla \n";
            break; 
        default:
            std::cout << "catch all \n";
            break;
    //without "break" you have fallthrough 
    }
    
}

int main(){
    

    return 0;
}