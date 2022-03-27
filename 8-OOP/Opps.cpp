#include <iostream>
using namespace std;
#define PI 3.141

class Circle {
private:
    string mod = "debug";
    // int arr[] = {1, 2, 3, 4, 5};
    int radius = 1;

public:
    void setRadius(int r) {
        if ( r >= 0 ) {
            radius = r;
        }
    }

    int getRadius() {
        return radius;
    }

    double getArea() {
        return PI * radius * radius;
    }
};


class Rectangle {
    int length;
    int width;

    public:

    // get and set for length
    void setLength(int l);
    int getLength();

    // get and set for width
    void setWidth(int w);
    int getwidth();

    int area();
    };


    void Rectangle::setLength(int l){
        length = l;
    }
    int Rectangle::getLength(){
        return length;
    }

    void Rectangle::setWidth(int w){
        width = w;
    }
    int Rectangle::getwidth(){
    return width;
    }




    //   Deconstructor

class Collector {
    int * list;
    int size;
    int capacity;

public:
    // Default constructor
    Collector(){
        // We must define the default values for the data members
        list = nullptr;
        size = 0;
        capacity = 0;
    }

    // Parameterized constructor
    Collector(int cap){
        // The arguments are used as values
        capacity = cap;
        size = 0;
        list = new int[capacity];
    }

    bool append(int v){
        if (size < capacity) {
            list [ size++ ] = v;
            return true;
        }
        return false;
    }

    // A simple print function
    void dump(){
        for(int i = 0 ; i < size ; i++) {
            cout << list[i] << " ";
        }
        cout << endl;
    }

    ~Collector(){
        cout << "Deleting the object " << endl;
        if (capacity > 0)
            delete[] list;
    }
}

int main() {
    Circle c;
    cout<< "The area of a circle of radius " << c.getRadius() << " is " << c.getArea() << endl;
    return 0;
}