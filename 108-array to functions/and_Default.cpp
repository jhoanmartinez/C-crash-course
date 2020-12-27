#include <iostream>
#include <string>

using namespace std;

void print_guest_list(string arr[], size_t size);
void clear_guest_list(string arr[], size_t size, string);
void event_guest_list(string arr[], size_t value, string="- ");

int main(){
    string guest_list[] {"Kira", "Milo", "Merry"};
    event_guest_list(guest_list, 3, " Empty");
    return 0;
}

void event_guest_list(string arr[], size_t size, string replace){
    print_guest_list(arr, size);
    clear_guest_list(arr, size, replace);
    print_guest_list(arr, size);
}

void print_guest_list(string arr[], size_t size){
    for(size_t i{0}; i < size; i++)
        cout << arr[i] << " ";
}

void clear_guest_list(string arr[], size_t size, string replace){
    for(size_t i{0}; i < size; i++)
        arr[i] = replace;
}
