#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int arr[n], m, sum = 0, i = 0;
    while (i < n - 1)
    {
        cin >> arr[i];
        sum += arr[i];
        i++;
    }
    int sum2 = (n * (n + 1)) / 2;
    cout << sum2 - sum << "\n";

    return 0;
}
