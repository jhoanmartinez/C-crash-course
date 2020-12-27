#include <iostream>

using namespace std;



//------------------CIRCLE----------------
double circle_area(double a){
    const double pi {3.14};
    double r = a*a;
    double area = pi*r;
    return area;
}

void circle_area_int(){
    cout<<"CIRCLE"<<endl;
    double area {};
    cout<<"Type are circle:";
    cin>>area;
    cout<<"area cricle is "<<circle_area(area)<<endl;
}

void circle_area_shows(){
    circle_area_int();
}

//---------------CILINDER-------------------
double volume_cilinder(double a, double b){
    double volume = a * b;
    return volume;
}

void volume_cilinder_int(){
    double area_cilinder {};
    double height {};
    cout<<"CILINDER"<<endl;
    cout<<"Type the base area:";
    cin>>area_cilinder;
    cout<<"type heigh:";
    cin>>height;
    cout<<"Volume cilinder: "<<volume_cilinder(area_cilinder, height)<<"\n\n";
}

void shows_cilinder(){
    volume_cilinder_int();
}

//----------------------MAIN--------------------

int main(){
    shows_cilinder();
    circle_area_shows();
    return 0;
}
