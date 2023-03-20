#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1, b = 2;
    // scanf("%d%d", &a, &b);

    // swap function
    swap(a, b);
    cout << "a = " << a << " "
         << "b = " << b << "\n";

    // minimum function
    cout << "minimum number : " << min(a, b) << "\n";
    // cout << "minimum number : " << min({a, b, c, d}) << "\n";   // more then two argument

    // maximum function
    cout << "maximum number : " << max(a, b) << "\n";

    // shorting function
    vector<int> num = {1,
                       24,
                       5,
                       2,
                       76,
                       43};

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    // only sort from middle
    sort(num.begin() + 1, num.begin() + 2 + 1);

    cout << "\nafter sorting 2 : ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    sort(num.begin(), num.end());
    cout << "\nafter sorting : ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}