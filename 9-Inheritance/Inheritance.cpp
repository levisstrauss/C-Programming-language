#include <iostream>
using namespace  std;


class Base {
public:
    void display() {
        cout<<"Display of base"<<endl;
    }
};

// Create an inheritance

class Derived:public Base {
};


int man(){

    Derived d;
    d.display();

    return 0;
}