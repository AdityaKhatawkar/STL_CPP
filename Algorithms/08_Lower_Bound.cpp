/*
Works only on sorted data.

returns an iterator pointing to the first element which is not less than x

auto it = lower_bound(arr, arr+n, x);
ind = it - arr;

points to end iterator if such element is not present.

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

    auto it = lower_bound(arr, arr + n, 2);
    auto ind = it - arr;
    cout << "The first occurance of the element not less than 2 is present at index: " << ind << endl;

    auto i = lower_bound(vec.begin(), vec.end(), 2);
    int in = i - vec.begin();
    cout << "The first occurance of the element not less than 2 is present at index: " << in << endl;

    return 0;
}
