/*
begin(), end(), rbegin(), ren()
begin() points to the starting element
rbegin() points to the last element
end() points to the address space right after the last element
rend() points to the address space right before the first element

auto means automatically takes the data type of the element.
"it" is the pointer pointing to the elements in the array.
To iterate to the end, initialize it with begin() till it is not equal to end()

foreach loop:   Foreach loop is used to iterate over the elements of a container (array, vectors, etc)
quickly without performing initialization, testing, and increment/decrement. The working of foreach loops
is to do something for every element rather than doing something n times.

Syntax:
for (data_type  variable_name : container_name) {
     operations using variable_name
}


*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> a = {1, 2, 3, 4, 5};


    //Iterators
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = a.rbegin(); it != a.rend(); it++) // Iterating in reverse
    {
        cout << *it << " ";
    }
    cout << endl;



    for (auto it : a) // foreach loop
    {
        cout << it << " ";
    }
    cout << endl;

    string s = "ADITYA";
    for (auto c : s)
    {
        cout << c << " "; // prints character by character
    }

    return 0;
}
