/*
#include<deque> is the header file used.

It is a doubly ended queue.
Can perform push and pop operation from both ends.
Data isn't stored in contiguous locations as in array and vector.
Data is stored in multiple fixed static arrays.

Syntax:
deque<int> d;
d.push_back(element) to insert at end
d.push_front(element) to insert at front
d.at(index) can be used to get element at a particular index.
d.front() to get first element
d.back() to get last element
Iterators can be used.
d.empty() to check is queue is empty.
d.erase(d.begin(),d.begin()+1); //it is necessary to specify what to erase.
*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(4);
    d.push_front(5);

    for (auto i : d)
    {
        cout << i << " ";
    }




    // pop
    d.pop_back();
    d.pop_front();

    cout << "After pop: " << endl;
    for (auto i : d)
    {
        cout << i << " ";
    }
    cout << endl;




    // at
    cout << "Element at index 1: " << d.at(1) << endl;



    // erase
    cout << "Size is : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // first element gets erased
    cout << "Size after erase is : " << d.size() << endl;

    return 0;
}
