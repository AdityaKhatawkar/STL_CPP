// given N elements, print all elements in sorted order 
// input 
// n = 6 
// 6 6 3 2 3 5 
 
// output 
// 2 3 3 5 6 6 


//this approach is better than just sorting

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
                   
int main()
{

 
	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}
 
	for(auto it : ms) {
		cout << it << endl; 
	}
                   
    return 0;
}
