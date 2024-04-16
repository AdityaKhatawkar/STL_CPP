/*
Substracting begin iterator from any iterator gives the index of that element in the container.
return an iterator pointing to the first instance of it, or else it
returns pointing to the end() if it is not there

auto it = find(beginIterator, endIterator, element);
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




    auto it = find(arr, arr + n, 2);
    int ind = it - arr; // index of the first occurance of element





    auto i = find(vec.begin(), vec.end(), 2);
    int index = i - vec.begin();
    

    if (i == vec.end())
    {
        cout << "element is not present";
    }
    else
    {
        cout << "Element is first present at: " << i - vec.begin();
    }



    return 0;
}
