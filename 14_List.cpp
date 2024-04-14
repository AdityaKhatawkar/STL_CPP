/*
#include<list> is the header file.

Implemented using doubly linked list.
push_front()
push_back()
pop_front()
pop_back()
begin, end, rbegin, rend
size
clear
empty
at
remove -> O(1) list has a remove operation which has time of O(1) so list is preffered over deque.
*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);


    
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;



    l.remove(2); // o(1) operation
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
