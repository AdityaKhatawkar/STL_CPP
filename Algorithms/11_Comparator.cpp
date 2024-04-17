/*
a comparator is a function or a function (an object that acts like a function) that is used to compare elements.
It is widely used in sorting algorithms or in data structures like std::sort or std::priority_queue to define
custom sorting orders.


take two elements el1 and el2.
return true if el1 is before el2 or else return false.
*/

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(int el1, int el2)
{
    if (el1 <= el2)
    { // element 1 already smaller than element 2, so already sorted
        return true;
    }
    return false;
}

bool comp2(pair<int, int> el1, pair<int, int> el2)
{
    if (el1.first < el2.first)
    {
        return true;
    }
    if (el1.first == el2.first)
    {
        if (el1.second > el2.second)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // arr
    pair<int, int> arr[] = {{1, 4}, {5, 2}, {5, 9}};
    // after sorting arr[] = {{1, 4}, {5, 9}, {5, 2}}
    sort(arr, arr + 3, comp);


    // sorts in ascending according to first
    // if first is equal then sorts according to second in ascending
    sort(arr, arr + 3);
    // i want you to sort this in such a way
    // that the element who have first element in pair smaller
    // appears first, and if first is equal then sort according
    // to second and keep the larger second


    // descending
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending
    // sort(arr, arr+n, greater<int>);


    // C++ program to create comparator using function pointer
    // #include <algorithm>
    // #include <iostream>
    // #include <vector>
    // using namespace std;


    // // Custom comparison function
    // bool customComparison(int a, int b)
    // {
    // 	// Custom comparison logic
    // 	return a < b; // it sorts in ascending order
    // }


    // int main()
    // {
    // 	// Creating a vector of integers
    // 	vector<int> myVec = { 7, 5, 2, 1, 4, 3 };

    // 	// Using sort with a function pointer
    // 	sort(myVec.begin(), myVec.end(), customComparison);

    // 	// Displaying the sorted vector
    // 	cout << "Sorted Vector: ";
    // 	for (int num : myVec) {
    // 		cout << num << " ";
    // 	}
    // 	cout << endl;

    return 0;
}


