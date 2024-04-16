/*

If i want to find the maximum elements in any index range
i to j give me the maximum

*max_element(firstIterator, lastIterator);
*min_element(firstIterator, lastIterator);

if * is not given, it returns an iterator.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 5, 2, 3, 4};
    vector<int> vec = {1, 2, 3, 4, 5};

    int maxarr = *max_element(arr, arr + n);
    int minarr = *min_element(arr, arr + n);
    cout << "Max element is the array is: " << maxarr << endl;
    cout << "Min element is the array is: " << minarr << endl;

    int maxvec = *max_element(vec.begin(), vec.end());
    int minvec = *min_element(vec.begin(), vec.end());
    cout << "Max element is the Vector is: " << maxvec << endl;
    cout << "Min element is the vector is: " << minarr << endl;


    return 0;
}
