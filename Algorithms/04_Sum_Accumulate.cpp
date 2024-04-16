/*
#include<numeric> is the header file.

I give you a range and I want you to find the sum in that range 
i - j, tell me the sum in that range i to j 

accumulate(startIterator, endIterator, initialSum);
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 5, 2, 3, 4};
    vector<int> vec = {1, 2, 3, 4, 5};

    int sum = 0;
    int vecsum = 0;
    sum = accumulate(arr,arr+n,sum);
    cout << "Array sum is : " << sum << endl;


    vecsum = accumulate(vec.begin(), vec.end(),vecsum);
    cout << "Vector sum is : " << vecsum << endl;



    return 0;
}
