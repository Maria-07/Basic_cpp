#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world" << endl;
    int x, y;
    char ch;
    float f;
    double d;
    string s;

    cin >> x >> y >> ch >> f >> d >> s;                                             // extraction
    cout << x << " " << y << " " << ch << " " << f << " " << d << " " << s << endl; // insertion

    return 0;
}
