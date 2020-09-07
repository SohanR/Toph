#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if (y % x == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << x - (y % x) << endl;
    }

    return 0;
}