#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    cin >> dna;

    long long count = 1, max_count = 1;
    int i = 1;

    while (dna.size() >= i)
    {
        if (dna[i] == dna[i - 1])
        {
            count++;
            max_count = max(max_count, count);
        }
        else
        {
            count = 1;
        }
        i++;
    }

    printf("%lld\n", max_count);

    return 0;
}
