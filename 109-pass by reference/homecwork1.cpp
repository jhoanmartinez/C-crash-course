#include <iostream>
#include <string>

using namespace std;

void event_guest_list();
void print_guest_list(string &a, const string &b, const string &c);
void clear_guest_list(string &d, string &f, string &o);

int main(){
	event_guest_list();
	return 0;
}

void event_guest_list(){
	string guest_1 {"Larry page"};
	string guest_2 {"Elon Musk"};
	string guest_3 {"Rubiela Silva"};

	print_guest_list(guest_1, guest_2, guest_3);
	clear_guest_list(guest_1, guest_2, guest_3);
	print_guest_list(guest_1, guest_2, guest_3);
}

void print_guest_list(string &a, const string &b, const string &c){
	cout<< "PRINT" << endl;
	cout << a << "\n" << b << "\n" << c << endl;
}

void clear_guest_list(string &d, string &e, string &f){
	cout << "CLEAR" << endl;
	d = e = f = " - ";
}
