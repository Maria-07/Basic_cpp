#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d \n", i);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
        {
            continue;
                }
        printf("%d \n", i);
    }

    return 0;
}