#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "I'm eating rice", s2 = " I'm also eating dal";
    string s3 = s1 + s2;
    cout << s3 << "\n";

    string s = "I live in Dhaka .";
    cout << s[0] << "\n";
    cout << s[1] << s[2] << "\n";

    cout << s.size() << "\n"; // size of string

    // Ascii value update by 1 in string
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = s[i] + 1;
    }
    cout << "Ascii update string = " << s << "\n";

    string str1 = "I live in Dhaka .";
    str1.pop_back(); // pop_back function use for delete from last side
    cout << "Last digit delete = " << str1 << "\n";

    str1.erase(str1.begin() + 4); // .erase function use for delete from fast sides
    cout << "fast digit delete = " << str1 << "\n";

    string str2;
    // cin >> str2; // it only get 1st word.
    getline(cin, str2); // use for to get a full sentence;

    cout << str2 << "\n";
    return 0;
}
