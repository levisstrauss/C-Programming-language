#include <iostream>
#include <vector>
#include "Headers/increment_and_sum.h"
using std::vector;
using std::cout;
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4};
    int total = IncrementAndComputeVectorSum(v);
    cout << "The total is: " << total << "\n";
}
