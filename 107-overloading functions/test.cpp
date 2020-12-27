//Be careful when you overload functions and use
//values by default
#include <iostream>
#include <vector>

using namespace std;

    void print(int=123);
    void print(double=125.5);
    void print(string);
    void print(string, string);
    void print(vector<string>);

    void print(int num){
        cout << "void num " << num << endl;
    }

    void print(double num){
        cout << "void double " << num << endl;
    }

    void print(string text){
        cout << "void string " << text << endl;
    }

    void print(string text_1, string text_2){
        cout << "void text 1" << text_1 << "void text 2" << text_2 <<endl;
    }

    void print(vector<string>v){
        cout << "void print vector ";
        for(auto s:v)
            cout << s +" ";
        cout << endl;
    }


int main(){
    string s{"C++ string"};
    vector<string> three{"qwe","ppp","www"};

    print();
    print(100);
    print("A");
    print(234.534);
    print("C-style string");
    print(s);
    print("C style string", s);
    print(three);
    return 0;
}
