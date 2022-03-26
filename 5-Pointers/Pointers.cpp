#include <iostream>
using namespace  std;

int main() {


    // We use pointer to access element store in Heap memory
    // Because the main program can't directly access the Heap but the pointer stored
    // in the stack and use it to access the heap
    int x = 10;
    int *p;  // declaration
    p = &x;   // Assignment
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<"Access the value based the pointer "<<*p<<endl; // dereferencing

    //Inside the Stack
    int *t;
    t = new int[10];

    // Declare inside the heap
    int *pointer = new int[5];
    pointer[0] = 12;
    pointer[1] = 12;
    cout<<pointer[1]<<endl; // To access the element
    // If i want to free memory
    delete []pointer; // To free the memory
    pointer = nullptr;

}
