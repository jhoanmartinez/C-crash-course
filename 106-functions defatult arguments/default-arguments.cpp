#include <iostream>
#include <string>

double calc_cost(double price, double shipping=10.32, double tax_rate=10.32);
void greeting(std::string name=" No name", std::string prefix="No prefix");

double calc_cost(double price, double shipping, double tax_rate){
    return price + shipping + tax_rate;
}

void greeting(std::string name, std::string prefix){
    std::cout<<"Hello "<<prefix<<" "<<name<<std::endl;
}

int main(){
    double shirt {30};
    double shipping {5.10};
    double tax_rate {100};
    double x = calc_cost(shirt, shipping, tax_rate);
    std::cout<<x<<std::endl;

    std::string name {""};
    std::string prefix {""};
    std::cout<<"Enter name: ";
    std::cin>>name;
    std::cout<<"Enter prefix: ";
    std::cin>>prefix;
    greeting(name, prefix);
    greeting();


    return 0;
}
