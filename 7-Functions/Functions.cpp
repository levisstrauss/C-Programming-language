#include <iostream>
using namespace  std;

// function  Template or generic function
template<class T>
T maxim(T a, T b){
    return a > b ? a: b;
}

// add function
int add(int x, int y){
    int z;
    z = x + y;
    return z;
}

// A function can be passed by value or address
int swap(int *a, int *b){
    static int poi; // How we can declare a static variable
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
 int a = 14, b= 14, c;
 c = add(a, b);
 cout<<"The sum of these two numbers are: "<<c<<endl;

 // Template function

 cout<<maxim(12, 14)<<endl;
 cout<<maxim(12.5, 14.2)<<endl;


    // Function pass by address
     int t1 = 10, t2 = 20;
    swap(&t1, &t2);

 return 0;

}
