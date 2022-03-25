#include <iostream>
using namespace std;

        // 0     1     2    3      4    5    6
enum day {Mon, Tues, Wed, Thur, Frid, Sat, Sun};

typedef int marks;


int main() {

//  #################### Getting the number ####################
    int a, b, c;
    cout<<"Enter your three Numbers: \n";
    cin>>a>>b;
    c = (a + b);
    cout<<"The total sum is "<<c<<endl;


//  #################### Getting the string ####################
    string name;

    cout<<"May I know your name ";
    cin>>name;
    getline(cin, name);
    cout<<"Hello, your name is: "<<name<<endl;

//  #################### Compute the natural number  ####################
   int num, sum;
   cout<<"Enter a positive Number: ";
   cin>>num;
   sum = num * (num + 1 ) / 2;
   cout<<"The sum of the number is: "<<sum<<endl;

//  #################### Enum ####################
    day d;
    d = Thur;
    cout<<d<<endl;
    cout<<Thur<<endl;

    // typedef allow us ti create our own type
      marks m1, m2;
      m1 = 10;
      m2 = 20;
      cout<<m1<<endl;

    return 0;
}