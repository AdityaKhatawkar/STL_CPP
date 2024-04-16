/*
Works only on sorted data because internal implementation is binary search.
returns an iterator which points to an element which is just greater than x.
Points to end if such element does not exist.

auto it = upper_bound(arr, arr + n, 2);
auto ind = it - arr;

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 1, 2, 3, 4};
    vector<int> vec = {1, 2, 2, 2, 2};

    auto it = upper_bound(arr, arr + n, 2);
    auto ind = it - arr;
    cout << "The first occurance of the element just greater than 2 is present at index: " << ind << endl;

    auto i = upper_bound(vec.begin(), vec.end(), 2);
    int in = i - vec.begin();
    cout << "The first occurance of the element just greater than 2 is present at index: " << in << endl;

    return 0;
}
