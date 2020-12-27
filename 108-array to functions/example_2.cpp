#include <iostream>

using namespace std;

void print_array(int [], size_t size);

int main(){
    int my_numbers[] = {10,20,30};
    print_array(my_numbers, 3);
    return 0;
}

void print_array(int numbers[], size_t size){
    for(int i = 0; i < size; i++){
        cout << numbers[i] << endl;
    }
}
