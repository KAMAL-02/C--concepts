#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{

    // vector declaration and pushback
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // size of the vector
    cout << "Size of vector is : " << v.size() << endl;
    print(v);

    vector<int> A(5, 100);
    print(A);

    // iterator in vector
    vector<int>::iterator it = A.begin();
    it++;
    cout << *(it) << endl;

    // deletion
    A.erase(A.begin() + 2);
    print(A);

    // insertion
    A.insert(A.begin(), 300);
    A.insert(A.begin(), 2, 45);

    print(A);

    return 0;
}
