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



    int size = 5;
    // Initialize array
    int Roll_Number[5] = {100, 101, 102, 103, 104};

    cout << "Values of array before updation: " << endl;
    // Print values of array
    for (int i = 0; i < size; i++) {
        // Accesss elements of array at index i
        cout << Roll_Number[i] << "  ";
    }
    cout << endl;
    // Update values of array element at index 3 and 4
    Roll_Number[3] = 22222;
    Roll_Number[4] = 33333;
    cout << "Values of array after updation: " << endl;
    // Print updated values of  array
    for (int i = 0; i < size; i++) {
        // Access elements of array at index i
        cout << Roll_Number[i] << "  ";
    }

    // Initialize row and column index
    int row = 3 , column = 3;
// Initialize static 2D array
    int Student[row][column] = {{100, 134, 234}, {34, 189, 221}, {109, 139, 56}};

    //Print static 2D Array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            // Access element at row index i and column index j
            cout << Student[i][j] << " ";
        }
        cout << endl;
    }


    int add_diagonal(int arr[3][3], int row, int col) {
        // Initialize sum
        int sum = 0;
        // Outer loop to traverse rows in a 2D array
        for (int i = 0; i < row; i++) {
            // Inner loop to traverse values in each row
            for (int j = 0; j < col; j++) {
                // Check if row index is equal to column index
                if (i == j) {
                    // Add element at row index i and column index j in sum
                    sum = sum + arr[i][j];
                }
            }
        }
        return sum;
    }

// print_array function
    void print_array (int arr[3][3], int row, int column){
        // Outer loop
        for (int i = 0; i < row; i++) {
            // Inner loop
            for (int j = 0; j < column; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
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
