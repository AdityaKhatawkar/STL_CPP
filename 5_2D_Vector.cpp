/*
There are various ways to initialize a 2D vector.

vector<vector<int>> vec;  //Vector is created inside a vector, which makes a 2D vector.

Array of vectors:
vactor<int>arr[4];

3D vector:
vector<vector<vector<int>>> vec1(10, vector<vector<int>>(20, vector<int>(30, 0)));  10x20x30 vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> vec;

    vector<int> adi1;
    adi1.emplace_back(1);
    adi1.emplace_back(2);
    adi1.emplace_back(3);

    vector<int> adi2;
    adi2.emplace_back(10);
    adi2.emplace_back(20);
    adi2.emplace_back(30);

    vector<int> adi3;
    adi3.emplace_back(11);
    adi3.emplace_back(22);

    vec.push_back(adi1); // A 1D vector is pushed into another vector.
    vec.push_back(adi2);
    vec.push_back(adi3); // size of pushed vector doesnt matter





    // printing a 2D vactor:
    // here auto takes the data type of vector <int> and "i" is a vecor itself. "it" iterates through the vector "i"
    for (auto i : vec)
    {
        for (auto it : i)
        {
            cout << it << " ";
        }
    }
    cout << endl;





    // We can also use the traditional method too
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }





    // define a 10x20 size vector
    vector<vector<int>> vct(10, vector<int>(20, 0)); // 10 vectors are added, each vector will have 20 elements
    vct.push_back(vector<int>(20, 0));
    cout << vec.size() << endl;

    vec[2].push_back(1); // 1 gets pushed into vector at index 2





    // Array of vectors
    vector<int> arr[4];
    arr[0].push_back(2); // value 2 is pushed into the vector at array index 0. array is not dynamic but its elements are because
                         // they are vectors.





    // 3D vector
    // 10x20x30

    vector<vector<vector<int>>> vec1(10, vector<vector<int>>(20, vector<int>(30, 0)));

    return 0;
}
