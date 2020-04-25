#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;

    cin >> s;

    r = s;
    // int start = 0;
    // int end = s.size() - 1;

    // while (start < end)
    // {
    //     if (s[start++] != s[end--])
    //     {
    //         cout << "No" << endl;
    //         break;
    //     }
    // }
    // cout << "YES" << endl;

    reverse(r.begin(), r.end());
    if (r == s)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}