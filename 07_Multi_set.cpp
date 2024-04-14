/*
#include<set> is the header file.

Multiset stores all the elements including the duplicate ones in the sorted fashion.


same functions as in regular set can be used.

using ms.erase(2) will erase all the instances of 2.
*/

#include<iostream>
#include<set>
using namespace std;
                   
int main()
{
    multiset<int> ms;

    ms.insert(5);
    ms.insert(5);
    ms.insert(6);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);

    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;




    //erasing all the instances of a key
    ms.erase(5);

    for(auto it:ms){
        cout<<it<<" ";
    }cout<<endl;




    // erases the first instance of 2.
    ms.erase(ms.find(2)); 
    for(auto it:ms){
        cout<<it<<" ";
    }



    //find
    auto it = ms.find(5); // returns the iterator pointing to the first occurance of the key


    return 0;
}
