#include <iostream>
using namespace std;

int main(){

    //############ If conditional statement  Nested if ###########
    int roll;
    cout<<"Enter your roll number: ";
    cin>>roll;
    if ( roll < 1) {
        cout<<"The Number your entered is less than 1";
    } else {
        cout<<"The Number your entered is greater than 1";
    }

    //############ Logical Operators  AND &&, OR ||, NOT != ###########
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if ( age < 12 || age > 50) {
        cout<<"You're young";
    } else {
        cout<<"You're young";
    }

    //############ Switch Case ######################
    int x = 4;
    switch(x){
        case 1 : cout<<"one";
        break;
        case 2 : cout<<"two";
            break;
        case 3 : cout<<"three";
            break;
        default : cout<<"Invalid Number";
    }

    return 0;

}