//By value is good because we can made changes to the value
//and it is not good because making copy of data can be expensive

//formal paramatres use the function without params, params defined in the function
//header

//actual paramatres the params used using the function call (arguments to a function)

#include <iostream>

void other_value(int a){
    a = 9;
}

//prototype function
int add_number(int a, int b);

//call
int main(){
    int z = {};
     z = add_number(3,4);
    std::cout<<z<<std::endl;

    int t {353};
    std::cout<<"before send to function "<<t<<std::endl;
    other_value(t);
    std::cout<<"after send to function "<<t<<std::endl;
    return 0;
}

//function
int add_number(int a, int b){
    return a+b;
}
