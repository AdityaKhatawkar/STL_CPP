/*

#include <array>   header file is used.

Syntax:
array<datatype,size> array_name = {elements};

a.size() to get its size.
a.at(index) to get the element at an index
a.empty() to see if the array is empty, return 1 or 0.
a.front() to get the first element.
a.back() to get the last element.

If the array is initialized inside the main, it will have garbage values, if it is done outside the main, all the elements will
be initialized to zero.

If in main, in an array of size 5 only 3 elements are given, the other two elements will be initialized to zero.

arr.fill(num)  fills the entire array with num.


*/

#include <iostream>
#include <array> // header file for stl array
using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    array<int, 4> c = {1}; //-> {1,0,0,0}


    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }


    //at 
    cout << "Element at 2nd index is: " << a.at(2) << endl;


    //empty, front, back
    cout << "Empty or not: " << a.empty() << endl;
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;


    //fill
    array<int, 5> arr;
    arr.fill(5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr.at(i) << " ";
    }

    return 0;
}
