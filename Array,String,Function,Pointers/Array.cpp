#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, multi = 1;
    cin >> n;

    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        sum = sum + x[i];
        multi = multi * x[i];
    }

    printf("sum = %d\n", sum);
    printf("multiply %d\n", multi);

    return 0;
}