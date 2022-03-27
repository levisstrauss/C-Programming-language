#include <iostream>
using namespace  std;
/* The multi line command  */

int main(){
    const int number = 10;


    /*
     *  Primitive data types    ==> int, float, double, char, boolean, void
     *  Derived data type       ==> function, Array, Pointer, Reference
     *  User-defined data types ==> Structure, Union, Enum, Class, Typeof
     *  short int, long int, unsigned positive, signed both positive and negative
     * */

    // Type casting
    double temp = 10.5;
    int temp_int = (int)temp;
    cout<<temp_int;


    // String
    string text = "Hello world!";

    // Initialize variable money
    int money = 6;
    switch (money) {
        // first case
        case 20 ... 100:
            cout << "You can gift a watch" << endl;
            break;
            // compares value of case label from 10 to 19 with the value of money
        case 10 ... 19:
            cout << "You can gift a comic book " << endl;
            break;
            // compares value of case label from 9 to 5 with the value of money
        case 5 ... 9:
            cout << "You can gift a chocolate " << endl;
            break;
            // default case
        default:
            cout << "You can gift a pen " << endl;
    }

    // Perfect way of using the if statement
    number < 20 ? cout << "I am less than 20 ": cout << "I am greater than 20";
}
