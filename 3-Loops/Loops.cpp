#include <iostream>
using namespace std;

int main(){
    // while, do while, for, foreach
    // The while loop will always check the condition before processing
    int condition = 0;
    while(condition < 10){
        cout<<"Do processing"<<endl;
        condition++; // Make sure to avoid infinite loop
    }
    cout<<"Stop"<<endl;

    // The do while loop will always check the condition process first before checking the Condition
    int start = 0;
    do{
        cout<<"Processing"<<endl;
        start++;       // Make sure to avoid infinite loop
    } while(start < 10);


    // For loop
    int number, counter;
    cout<<"Enter a number: ";
    cin>>number;

    for (counter = 1; counter < 11; counter++){
        cout<< number<<" X "<<counter<<" = "<<number * counter<<endl;
    }

}