/*
Q3. tell me the number of times the x appears in arr
arr is sorted
*/

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

    auto i = upper_bound(arr, arr + n, x) - lower_bound(arr, arr + n, x);
    cout << x << " appears " << i << " times." << endl;

    return 0;
}
