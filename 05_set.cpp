/*

#include<set> is the header file.

Syntax:
set<int> s;  to create a set names s.

Set stores only unique elements.
The elements can only be inserted and deleted and cannot be modified. (immutable)
The internal implementation of sets is done with the use of Binary Search Trees (BSTs).
Elements are returned in sorted order.

Unordered set: The elements aren't returned in a sorted fashion. It is faster than regular set

s.insert() is used to insert elements into the set. O(logn) is the time complexity
s.erase(iterator) is used to delete an element from the list.
s.erase(element) is also used to delete a particular element from the set.
s.count(element) is used to check if the element is present in the set or not.

set<int>::iterator itr = s.find(5);  will return the iterator of 5.
or 
auto itr = s.find(6)
if the element doesn't exist, itr will point to s.end()



set elements cannot be accessed in the array index fashion. This is invalid:- s[0],s[1]....
iterators are used to locate the elements

*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;



    // Inserting elements
    s.insert(5);
    s.insert(5); // duplicate elements wont get stored.
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(6);
    s.insert(9);
    s.insert(8);
    s.insert(12);
    s.insert(13);
    s.emplace(15); //equivalant to insert




    // Printing the set
    for (auto i : s)
    {
        cout << i << endl; // will print in sorted order.
    }
    cout << endl;




    // erase
    // erase the first element.
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;




    // erase the nth element
    set<int>::iterator it = s.begin(); //returns the iterator of begin.
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;




    // s.erase(s.begin(),s.end());  erases the whole set

    //erase by key
    s.erase(5); //deletes the element 5
        for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;




    // count
    cout << "5 is present or not? -> " << s.count(5) << endl;





    //find
    //set<int>::iterator itr = s.find(6);
    auto itr = s.find(6); 
    for(auto it = itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;




    cout<<"The size of the set is: "<<s.size()<<endl; //number of elements in the set

    return 0;
}
