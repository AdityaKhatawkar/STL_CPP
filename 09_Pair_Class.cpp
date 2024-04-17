/*
#include<utility> is the header file

Pair is used to combine together two values that may be of different data types. 
Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples.

Vector of pair, set of pair, map of key pair is also possible.
But not possible in unordered map.
*/


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
                   
int main()
{
    pair<int,int> pr = {1,2}; //here pr.first is 1 and pr.second = 2



    //nested pair
    pair<pair<int,int>,int> p = {{1,2},2};
    //in such case to access the 2 in the first pair,
    cout<<p.first.second<<endl;



    vector<pair<int,int>>vec;
    set<pair<int,int>> st;
    map<pair<int,int>,int> mp;
    
                   
    return 0;
}
