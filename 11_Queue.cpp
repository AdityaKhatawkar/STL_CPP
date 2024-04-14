/*
First in first out.

Time is O(1) except when deleting the whole queue it is O(n)

#include<queue> is the header file.

Syntax:
queue<int> q;

q.push(element);  Inserting element in queue.
q.front() gives the first element.
q.pop() removes the first element.
q.size() gives the size.

There is no clear function to delete the queue, need to pop in a while loop to delete the Queue.

*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // push
    q.push(1); // will be popped first because first insert
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // front
    cout << "The first element is: " << q.front() << endl;

    // pop
    q.pop();
    cout << "The first element after pop is: " << q.front() << endl;

    // size
    cout << "The size of the queue is: " << q.size() << endl;

    // To delete the whole queue
    //  linear time
    // while (!q.empty())
    // {
    //     q.pop();
    // }



    return 0;
}
