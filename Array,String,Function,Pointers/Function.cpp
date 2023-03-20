#include <bits/stdc++.h>
using namespace std;

string functionStr(string s)
{
    s.pop_back();
    s.erase(s.begin());

    return s;
}

void functionStr2(string &s)
{
    s.pop_back();
    s.erase(s.begin());

    cout << "changes in function " << s << "\n";
    // return s;
}

void swapFunction(int &a, int &b) // pass by reference
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    string s;
    getline(cin, s);
    // cout << functionStr(s) << "\n";
    functionStr2(s);
    cout << s << "\n";

    swapFunction(a, b);
    printf("a= %d\nb= %d", a, b);

    return 0;
}