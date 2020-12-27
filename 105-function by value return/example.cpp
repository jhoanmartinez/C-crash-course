#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);

void pass_by_value1(int num){
    num = 100;
}

int main(){

    return 0;
}
