#include <iostream>
#include <string>

using namespace std;

//Prototipo de la funcion
string saludo();
string adios();
void hola();
void printSaludo(string);
bool esValido(int);

int main(){
    //proceso funcion desde main
    string mensaje{};
    mensaje = saludo();
    cout << mensaje << endl;
    cout << adios() << endl;
    hola();
    string paraSaludo{"desde saludo parametro"};
    printSaludo(paraSaludo);
    int numero {1};
    cout<<esValido(numero)<<endl;

}

//Definicion de la funcion
bool esValido(int n){
    if(n > 3) return true;
return false;
}

void printSaludo(string mensaje){
    cout << mensaje << endl;
}

string saludo(){
    return "Desde saludo";
}

string adios(){
    return "desde adios";
}

void hola(){
    cout << "Desde hola" << endl;
}
