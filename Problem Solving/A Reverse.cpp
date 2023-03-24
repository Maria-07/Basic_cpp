#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long L, R;
    string S;

    cin >> L >> R >> S;
    swap(S[L - 1], S[R - 1]);
    cout << S << "\n";

    return 0;
}