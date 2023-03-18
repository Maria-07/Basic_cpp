#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    scanf("%d", &age);

    if (age < 18)
    {
        printf("can't vote \n");
    }
    else if (age >= 18)
    {
        printf("can vote \n");
    }
    else
    {
        printf("nothing \n");
    }
    return 0;
}