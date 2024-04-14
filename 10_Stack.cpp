/*
#include<stack> is the header file

syntax:
stack<int> st;

internal application is array or linked list.

name.push(element) is used to insert elements to the stack.
name.top() is used to see the element at the top or the last inserted element.
If the stack is empty, top will throw an error. So need to check if(!st.empty()) before printing using top.
name.pop() is used to remove the top element.
name.size() is used to get the size of stack.
name.empty() returns a boolean value indicating the stack is empty or not.

There is no clear function to delete the stack, need to pop in a while loop to delete the stack.

Last in first out.
*/


#include<iostream>
#include<stack>
using namespace std;
                   
int main()
{
    stack<int> st;


    //push
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5); //last element pushed



    //top
    cout<<"The top element is: "<<st.top()<<endl;



    //pop
    st.pop();
    cout<<"The top element is: "<<st.top()<<endl;



    //size
    cout<<"The size of stack is: "<<st.size()<<endl;



    //empty
    cout<<"Empty or not? : "<<st.empty()<<endl;


    // deleted the entire stack 
	// while(!st.empty()) {
	// 	st.pop(); 
	// }

                   
    return 0;
}
