/*
Priority queue is the queue whose first element is always the greatest. (max heap)
It is related to heap.
operations in O(logn).

#include<queue> is the header file used.

syntax:
priority_queue<int> pq; To create a max heap. Whenever a value is fetched, it is the highest in the whole queue.

priority_queue<int, vector<int>, greater<int>> minq; To create a min heap, whenever a value is fetched, it is the lowest value
in the whole vector

q.push() insert elements.
q.top() get the first element.
q.pop() remove first element.
q.empty() check if the queue is empty.
swap(q1,q2) is used to swap contents of two queues, they must be of same type even if their sizes differ.

p.push(make_pair(1, 5));   we use makepair to push pair in the queue because it expects only one value to be pushed and
make pair will create a pair of the integers being pushed.
priority based on first element, if equal then 2nd element

greater: The std::greater is a functional object which is used for performing comparisons. 
It is defined as a Function object class for the greater-than inequality comparison.


*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxq; // based on max heap


    // min-heap
    priority_queue<int, vector<int>, greater<int>> minq;




    // push
    maxq.push(1);
    maxq.push(2);
    maxq.push(5);
    maxq.push(3);
    maxq.push(4);

    minq.push(2);
    minq.push(1);
    minq.push(5);
    minq.push(3);
    minq.push(4);

    cout << maxq.top() << endl; // top element is the highest
    cout << minq.top() << endl; // top element is the lowest




    // To print all elements
    int n = maxq.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxq.top() << " ";
        maxq.pop();
    }
    cout << endl;

    int m = minq.size();
    for (int i = 0; i < n; i++)
    {
        cout << minq.top() << " ";
        minq.pop();
    }
    cout << endl;




    cout << "Is queue empty?: " << minq.empty() << endl;




    // pair priority
    priority_queue<pair<int, int>> p; 
    p.push(make_pair(1, 5)); 
    p.push(make_pair(1, 6));
    p.push(make_pair(1, 7));






    // min heap using a max heap 
	priority_queue<int> pq;
	pq.push(-1); // pq.push(-1 * el); 
	pq.push(-5); 
	pq.push(-2); 
	pq.push(-6); 
	cout << -1 * pq.top() << endl; // prints 1

    return 0;
}
