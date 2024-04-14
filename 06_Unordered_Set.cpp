/*
#include<unordered_set> is the header file.

avg time: O(1)
worst time: O(n)

Unordered set: The elements aren't returned in a sorted fashion. It is faster than regular set.
We would never know which element is stored in what position.

Use unordered set over set if we dont need the elements to be in a sorted fashion.
If we are using unordered set and get tle, then switch to set.

Syntax: 
unordered_set<int> st;

*/

#include<iostream>
#include<unordered_set>
using namespace std;
                   
int main()
{
    unordered_set<int> st;
    st.insert(5);
    st.insert(1);
    st.insert(8);
    st.insert(2);

    for(auto i: st){
        cout<<i<<" ";
    }cout<<endl;
                   
    return 0;
}
