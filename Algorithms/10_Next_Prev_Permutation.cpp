/*
Next Permutation
string s = "abc"
all permutations are as follows:

abc
acb
bac
bca
cab
cba

all permutations are lexicographically sorted.

can be used for array and vector too.

bool res = next_permutation(s.begin(), s.end());

res = prev_permutation(s.begin(), s.end());

returns a boolean value.
the string s itself gets converted to the next permutation / previous permutation.
True is returned if s gets to the next/prev permutation, False is returned if not and the string remains the same.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "abc";
    bool res = next_permutation(s.begin(), s.end());
    cout << "Next permuatation is: " << s << endl;



    res = prev_permutation(s.begin(), s.end());
    cout << "Previous permuatation was: " << s << endl;




    vector<int> vec = {1, 2, 3};
    bool r = next_permutation(vec.begin(), vec.end());
    cout << "Next permuatation in vector is: ";
    for (auto it : vec)
    {
        cout << it << " ";
    }cout << endl;



    r = prev_permutation(vec.begin(), vec.end());
    cout << "Previous permuatation was: ";
    for (auto it : vec)
    {
        cout << it << " ";
    }

    return 0;
}
