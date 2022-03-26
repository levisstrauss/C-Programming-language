#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <set>
#include <map>
using namespace  std;

int main() {
    // Vector
    vector<int> v = {2, 3, 4, 67};
    v.push_back(20);
    v.push_back(30);

    // Display using loop
    for(int x:v){
        cout<<x<<endl;
    }

    // Display using iterator
    vector<int>::iterator itr;
    for (itr=v.begin(); itr!=v.end(); itr++){
        cout<<*itr<<endl;
    }



    //List

    // Vector
    list<int> l = {2, 3, 4, 67};
    l.push_back(20);
    l.push_back(30);

    // Display using loop
    for(int x:l){
        cout<<x<<endl;
    }

    // Display using iterator
    list<int>::iterator tr;
    for (tr=l.begin(); tr!=l.end(); tr++){
        cout<<*tr<<endl;
    }

    //#include <forward_list>
    // With push_front()

    //#include <set>
    //with insert()


    // Map<>

    map<int, string> m;
    m.insert(pair<int, string>(1, "John"));
    m.insert(pair<int, string>(2, "Levis"));
    m.insert(pair<int, string>(3, "Khan"));

    //Iterator
    map<int, string>::iterator  p;
    for (p=m.begin(); p!=m.end(); p++){
        cout<<p->first<<endl;
        cout<<p->second<<endl;
        p = m.find(2);
    }

    return 0;
}

