#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    if (a.length() == b.length())
    {

        sort(a.begin(), a.end());

        sort(b.begin(), b.end());

        if (a == b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}