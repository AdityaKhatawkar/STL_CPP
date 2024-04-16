/*
Returns a boolean value indicating whether the element is present in the array.
Only works on sorted arrays. Where as find works on any array but takes more time O(n).

binary_search(firstIterator, lastIterator, x)


returns a true or returns a false 
works in log n complexity 
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 1, 2, 3, 4};
    vector<int> vec = {1, 2, 2, 2, 5};

    bool res = binary_search(arr, arr + n, 1);
    cout << res << endl;

    bool r = binary_search(vec.begin(), vec.end(), 8);
    cout << r << endl;

    return 0;
}
