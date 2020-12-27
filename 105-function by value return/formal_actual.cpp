#include <iostream>

using namespace std;

//formal params
void param_test(int formal){ //formal is a copy of actual
    cout <<"2-1 void not change" << formal << endl;  //50
    formal = 100;            //only  changes the local copy
    cout <<"2-2 void change "<< formal << endl;  //100
}

int main(){
    //Actual params
    int actual = {50};      //50
    cout << "1-main "<<actual << endl; // pass in 50 to param_test
    param_test(actual);     //50 - did not change
    cout << "3-main " <<actual << endl;
    return 0;
}
