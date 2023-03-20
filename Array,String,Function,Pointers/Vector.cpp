#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;

    for (int i = 0; i < 10; i++)
    {
        cout << "before push" << a.size() << "\n";
        a.push_back(i);
        cout << "after push" << a.size() << "\n";
    }

    a.insert(a.begin() + 1, 100);

    for (int i = 0; i < a.size(); i++)
    { 
        cout << a[i] << "\n";
    }

    a.erase(a.begin() + 0);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\n";
    }

    // resize

    vector<int> b = {1, 2, 3, 4, 5};
    b.resize(3);

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << "\n";
    }
    return 0;
}