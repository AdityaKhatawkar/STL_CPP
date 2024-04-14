/*
Time complexity is O(logn)

#include<map> header file is used.

Syntax: 
map<int,string> m; that is int keys are mapped to string values

Data structure in which the data gets stored in a form of key value.
Like dictionaries in Python.
All keys are unique.
One key can only point to one value.

The keys are stored in a sorted order.

The ways to insert values in a map:
name[key] = value;
name.insert({key,value});
name.emplace(key,value);

m.erase(key); will erase both key and its value.
m.clear() deletes the map
m.erase(m.begin()) deletes the first key

auto it = m.find(key); it points to where key lies

m.empty() returns a boolean value to check if the map is empty, 1 if empty, 0 if not


Unordered map: 
    does not stores in any order 
	unordered_map<int,int> a; 
	unordered_map<pair<int,int>,int> mpp; xxxxxx
	o(1) in almost all cases
	o(n) in the worst case, where n is the container size 

*/

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
                   
int main()
{
    map<int,string> m;
    map<string,int> mpp;




    //Inserting values
    m[1] = "aaa";
    m[2] = "bbb";
    m[13] = "ccc"; //here 1,2,13 are the keys and aaa, bbb, ccc are the values stored in those keys.
    m.insert({5,"Adi"});
    mpp["Adi"] = 1;
    mpp["Ape"] = 2;
    mpp["Ans"] = 3;
    mpp["Shr"] = 4;
    mpp["Adi"] = 5; //over written
    mpp.emplace("aaa",10);




    //printing a map
    cout<<"Before erase."<<endl;
    for(auto it:m){ //auto will take the data type of pair
        cout<<it.first<<" "<<it.second<<endl;   //first will print the keys, second will print the values      
    }




    //count
    cout<<"Finding 13 -> "<<m.count(13)<<endl;




    //erase
    m.erase(13);
    cout<<"After erase."<<endl;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;   //first will print the keys, second will print the values      
    }

    mpp.erase(mpp.begin());




    //find
    auto it = m.find(2); //it points to where 2 lies.
    for(auto i = it;i!=m.end();i++){
        cout<<i -> first<<" ";
    }cout<<endl;




    //check if map is empty:
    cout<<"Map is empty?: "<<m.empty()<<endl;




	unordered_map<int,int> a; 
    //same operations as map.
                   
    return 0;
}
