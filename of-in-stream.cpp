// #include <iostream>
// #include <fstream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream of;
    of.open("1.txt");

    of << "hello word this is 1st one \n";

    ifstream ifs;
    ifs.open("0.txt");

    int x;
    double y;

    ifs >> x >> y;
    cout << x << " " << y << "\n";

    of.close();
    ifs.close();
    return 0;
}
