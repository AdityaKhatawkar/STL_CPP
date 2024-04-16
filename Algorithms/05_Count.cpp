/*
To get the number of times an element has occured.
count(firstIterator, lastIterator, x)
x is the element to count.
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 1, 2, 3, 4};
    vector<int> vec = {1, 2, 2, 2, 5};

    int arrcnt = 0;
    int veccnt = 0;
    arrcnt = count(arr,arr+n,1);
    cout << "1 in array are : " << arrcnt << endl;


    veccnt = count(vec.begin(), vec.end(),2);
    cout << "2 in vector are : " << veccnt << endl;



    return 0;
}
