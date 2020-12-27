//Same function same and different parameters
void display(int n);
void display(double d);
void display(std::string s);
void display(std::string s, std::string t);
void display(std::vector v);

//error example
int get_value();
double get_value();

//Error compiler
cout<<get_value()<<endl; //which one?

//overloading functions is used in object oriented design
