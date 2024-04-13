/*

Syntax:
vector<Datatype> vector_name;

Vector is a dynamic array.

When a vector is filled and we try to add another element to it, the program will automatically increase the
size of the vector by double. Basically, a new vector will be created with double the size of the first vector, the elements
of the first vector will be copied to the new one and then the old one will be deleted from memory.

We can use shrink to fit operation to decrease its size later.

#include <vector> is the header file.

size is how many elements in the vector, capacity is how much memeory has been allocated.

push_back function is used to insert element in vector.

at operation is also used in vector to get element at specific index.
front and back are also used to get first and last elements.

pop_back() is used to remove the last element.

clear operation is used to remove all elements from the vector, it will change the size to zero and the capacity will remain
the same.

If we only want to copy a few contiguous elements from one vector to another, iterators can be used.

emplace_back is another function to push elements into an element. It is preferred over push back as it takes lesser time.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    //Size vs capacity
    vector<int> v;
    cout << "Size -> " << v.capacity() << endl; // will display zero because memory is not allocated yet.

    // if we already know the size of our vector.
    vector<int> a(5, 1); // a(size of vector, initialize all elements to this)

    cout << "Print a: " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;



    // push
    v.push_back(1);
    cout << "Size -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size -> " << v.capacity() << endl;           // will show size-> 4 because the vector size got doubled as it got full and we
                                                          // tried to insert another element.
    cout << "Number of elements -> " << v.size() << endl; // will show number of elements.




    // at,front,back
    cout << "Element at index 2 -> " << v.at(2) << endl;
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;




    // pop
    cout << "Before pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;




    // clear
    cout << "Before clear: " << endl;
    cout << "Size -> " << v.capacity() << endl;
    cout << "Number of elements -> " << v.size() << endl;

    v.clear();

    cout << "After clear: " << endl;
    cout << "Size -> " << v.capacity() << endl;
    cout << "Number of elements -> " << v.size() << endl;




    // To copy elements of one vector to another:
    vector<int> copied(a);
    // or
    // vector<int> copied(a.begin(),a.end());
    cout << "Copied vector: " << endl;
    for (int i : copied)
    {
        cout << i << " ";
    }
    cout << endl;




    // copying selective few elements using iterators
    vector<int> adi;
    adi.push_back(1);
    adi.push_back(2);
    adi.push_back(3);
    adi.push_back(4);
    adi.push_back(5);

    vector<int> copied2(adi.begin(), adi.begin() + 2);
    for (auto i : copied2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
