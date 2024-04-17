// if I give you any random string s = "bca"
// i want you to print all the permutations

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "bca";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
