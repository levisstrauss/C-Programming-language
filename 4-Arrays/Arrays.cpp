#include <iostream>
using namespace  std;

int main() {

    int A[5] = {10, 20, 15, 45, 78,};
    for(int i = 0; i< 10; i++){
        cout<<A[i]<<endl;
    }
    // Foreach
    for(int x:A){
        cout<<A[x]<<endl;
    }


// Linear Search
    int Arr[10], n = 10;
    cout<<"Enter numbers"<<endl;
    for (int i = 0; i < n; i++){
        cin>>Arr[i];
    }
    int key;
    cout<<"Enter a key for searching "<<endl;
    cin>>key;
    for (int i = 0; i < n; i++){
        if (Arr[i] == key) {
            cout << "Found at index " << i;
            return 0;
        }

    }
    cout<<"Not found";



    // Binary Search  always on sorted array
    int Ar[5] = {10, 11, 12, 13, 14};
    int low = 0;
    int high = 4;
    int mid;
    cout<<"Enter a key: ";
    while(low <= high){
        mid = int((low + high)/2);
        if (key == Ar[mid]){
            cout<<"Found at: "<<mid<<endl;
            return 0;
        } else if (key <  Ar[mid]){
            high = mid - 1 ;
        }else{
            low = mid + 1;
        }
    }
    cout<<"Not found"<<endl;
}
