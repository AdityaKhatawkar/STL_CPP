// Find me the last occurrence of x in an arr

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

    auto ind = upper_bound(arr, arr + n, x) - arr;
    ind -= 1;
    if (ind >= 0 && arr[ind] == x)
    {
        cout << "last occurrence: " << ind;
    }
    else
    {
        cout << "Does not exists";
    }

    return 0;
}
