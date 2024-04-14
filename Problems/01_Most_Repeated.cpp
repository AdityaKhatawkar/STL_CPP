// given N elements, print the elements that occurs maximum
// number of times
// input
// 5
// 1 3 3 3 2

// output
// 3


//in this approach, the number will be the key and the number of times it will repeat will be determined by its value.

//This loop iterates n times, reading integers from the input and populating the map mpp with the frequency of each number. 
//It also keeps track of the number with the highest frequency (maxi).

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mpp;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mpp[x]++; 
        if (mpp[x] > mpp[maxi])
        {
            maxi = x;
        }
    }
    cout << maxi << endl;

    return 0;
}
