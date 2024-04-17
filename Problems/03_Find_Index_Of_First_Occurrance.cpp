// Q1. find me the first index where the element X lies
// find function can be used but that takes O(N) times
// the array is sorted..

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;





    // 1st way
    // if (binary_search(arr, arr + n, x) == true)
    // {
    //     cout << lower_bound(arr, arr + n, x) - arr;
    // }
    // else
    //     cout << "does not exists";






    auto ind = lower_bound(arr, arr + n, x) - arr;
    if (ind != n && arr[ind] == x)
    {
        cout << "Found at: " << ind;
    }
    else
    {
        cout << "Not found";
    }



    return 0;
}
