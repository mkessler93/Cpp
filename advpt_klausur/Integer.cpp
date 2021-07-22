#include <iostream>


class Integer{

    private:
        int value;
        static int amount;
    public:
        Integer(int value){
            this->value = value;
            amount++;
        };
        ~Integer(){
            amount -= 1;
        };
        static int count_amount(){return amount;};
        friend std::ostream& operator <<( std::ostream &output,  Integer i);
        friend Integer operator +(Integer& a, Integer&b);
};
int Integer::amount = 0;

std::ostream& operator <<( std::ostream& output,  Integer i){
    output << i.value;
    return output;
};

Integer operator +(Integer& a, Integer& b){
    return a.value + b.value;
};

int main(){
    Integer i(1);
    Integer j(2);
    Integer k(3);
    
    std::cout << j;
    j = 3;
    std::cout << j;
    k = i + j;
    std::cout << k;

    std::cout << Integer::count_amount();
    return 0;
}