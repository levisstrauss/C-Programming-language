#include <iostream>
using namespace  std;


// Struct function like class
struct Demo {
    int x;
    int y;


    void Display() {
        cout<<x<<" "<<y<<endl;
    }
};

// Class
class Rectangle{


    private:
         int length, breadth;

    public:
        void setLength(int l){
            length = l;
        }

        void setBreadth(int b){
            breadth = b;
        }

        int getBreadth(){
            return breadth;
        }

        int getLength(){
            return length;
        }
    // Function
        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }

    Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        // Destructor to release the memory
    ~Rectangle(){

        }

};

int main(){
    // Abstraction, Encapsulation, Inheritance, Polymorphism

    Rectangle r(10, 4); // Create an object
    Rectangle *p; // Create a pointer
    p = &r; // A pointer pointing to the rectangle object

    r.setLength(10); // direct Assignment
    p->setBreadth(20); // Pointer assignment
    p->area();

    // Create an object inside the Heap

    Rectangle *ptr;
    p = new Rectangle(19, 30);
    p->setLength(10);
    p ->setBreadth(4);
    p->area();
    p->perimeter();



    // Calling the struct
    Demo d;
    d.x = 20;
    d.Display();
}

