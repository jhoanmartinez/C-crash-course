#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string>  &v);
void print_vector(const vector<string> &v); //const

int main(){
	int num {10};
	int another_num{20};

	cout << "number before calling pass_by_ref1:" << num << endl;
	pass_by_ref1(num);
	cout << "number after calling pass_by_ref1:" << num << endl;

	cout << "\nnumber before calling pass_by_ref1:" << another_num << endl;
	pass_by_ref1(another_num);
	cout << "number after calling pass_by_ref1:" << another_num << endl;

	string name{"Kira"};
	cout << "\nname before call pass_by_ref2:" << name << endl;
	pass_by_ref2(name);
	cout << "name after calling pass_by_ref2:" << name << endl;

	vector <string> stooges {"A", "B", "C"};
	cout << "\nname before call pass_by_ref3:" << endl;
	print_vector(stooges);
	cout << "\nname after after pass_by_ref3:" << endl;
	pass_by_ref3(stooges);
	print_vector(stooges);

  	return 0;
}

void pass_by_ref1(int &num){
	num = 1000;
}

void pass_by_ref2(string &s){
  s = "Changed";
}

void pass_by_ref3(vector<string> &v){
  v.clear(); //delete all vectors elements
}

void print_vector(const vector<string> &v){
	for(auto s: v)
		cout << s <<" ";
	cout << endl;
}
