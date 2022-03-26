#include <iostream>
#include <cstring>
using namespace  std;

// The strlen(d) to find the length of a string
// The strcat(x, p, nber of p) Used to concatenate two string
// strcpy(x, p) will copy p to x
// strncpy(x, p, 2) will copy p to x
// strcmp(a, c) compare two string
// strstr(main, sub) will check to see if sub is in main from the starting point until end
// strtol(a)
// strtof(d)
// strtok()

//////////// String ////////
// s.length(), s.size(), s.capacity(), s.resize(), s.max_size(), s.clear(), s.empty()
//s.append("bb"),s.replace(3, 5, "ttt"), s.insert(3, "kk"), s.erase(), s.push_back('z'), s.pop_back(), s.swap(s2)
//s.copy(char des[]), s.find(str), s.rfind(str), s.find_first_of(str), s.find_last_of(str), s.substr(start, number), s.compare(str)

// Iterator
// string::reverse_iterator  string::iterator
//     =====> left to right begin(), end()            rbegin(), rend() <======
int main() {

    char x = 'A';
    char S[10] = "Hello";
    char T[] = "Hello";
    char Ass[] = {14, 55, 20};
    char *g = "hello world!"; // Will be created inside heap


    // Read a string

    char name[20];
    cout<<"Enter your name";
    cin>>name;

   // more complete way for separate string
    char names[20];
    cout<<"Enter your name";
    cin.get(names, 20);
    cin.getline(names, 20)


}

