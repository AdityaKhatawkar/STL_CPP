/*
#include<algorithm>

If I wanna reverse
reverse(startIterator, endIterator) -> [)

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



    reverse(arr, arr + n); // reverses entire array
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;




    reverse(arr + 1, arr + 4); // reverses elements from index 1 to 3

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;




    reverse(vec.begin(), vec.end()); // reverses entire vetor

    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;




    reverse(vec.begin() + 1, vec.begin() + 4); // reverses elements from index 1 to 3

    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;




    return 0;
}
