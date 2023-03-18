#include <bits/stdc++.h>
using namespace std;

int x = 5, y, z;

int func(int a, int b)
{
    return a + b;
}

namespace info
{
    int x = 15;

    int func(int a, int b)
    {
        return a + b;
    }
}

int main()
{
    cout << info::x << "\n";
    cout << x << "\n";

    cout << func(10, 20) << "\n";
    cout << info::func(60, 20) << "\n";

    return 0;
}