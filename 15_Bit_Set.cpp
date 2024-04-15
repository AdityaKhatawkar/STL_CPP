/*

A bitset is an array of bools but each boolean value is not stored in a separate byte instead, bitset optimizes
the space such that each boolean value takes 1-bit space only, so space taken by bitset is less than that of an
array of bool or vector of bool.

#include<bitset>   is the header file.

syntax:
bitset<10> bt;

int -> 16 bits
char -> 8 bits
bitset -> 1 bit

bitset creates an array like structure and takes much lesser space compared to traditional array.

It is used in segment trees.


all:
returns true if all the bits are set else false;

any:
If any of the bit is set, true is returned else false is no bit is set.

count:
Prints number of set bits.

flip:
bt.flip(index) flips 1 to 0 and 0 to 1;

none:
returns true if no bit is set.

set:
sets the bits. we can also give an index to set a particular bit.

reset:
turns all indexes to zero.
can also give the index.

size:
gives size of the bits;

test:
checks if the particular bit is set.
*/

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<5> bt;

    cin >> bt; // 10110 etc

    // all
    cout << "All bits are set? " << bt.all() << endl;

    // any
    cout << "Any bit is set? " << bt.any() << endl;

    // count
    cout << "Count is: " << bt.count() << endl;

    // flip
    cout << "Before flip: " << bt[2] << endl;
    bt.flip(2);
    cout << "After flip: " << bt[2] << endl;

    // none
    cout << "No bit is set? " << bt.none() << endl;

    // set
    cout << "Before set: " << bt[2] << endl;
    // bt.set(); //sets all the bits
    bt.set(2);
    cout << "After set: " << bt[2] << endl;
    bt.set(2, 0); // sets the second index to zero.

    // reset
    bt.reset(2); // turns second index to zero.

    // size
    cout << "Size of the bit is: " << bt.size() << endl;

    // test
    cout << "Index 2 is set or no? " << bt.test(2) << endl;

    return 0;
}
