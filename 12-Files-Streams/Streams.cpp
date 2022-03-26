#include <iostream>
#include <fstream>
using namespace std;


int main(){

  // ios::app for append new content
  //ios::trunc for truncating the file
    ofstream ofs("my.txt");
    ofs<<"Hello"<<endl;
    ofs<<"Hello"<<endl;
    ofs<<"Hello"<<endl;
    ofs.close();

    // ios::in for reading
    //ios::out for writing
    ifstream infile;
    infile.open("my.txt");
    if (!infile.is_open()){
        cout<<"Error the file cannot be open"<<endl;
    }else{
        string str;
        int x;
        infile>> str;
        infile>>x;
        cout<<str<<" "<<x;
        if(infile.eof()){  // The end of the file
            cout<<"end of the file"<<endl;
        }
    }
    infile.close();

    return 0;
}

