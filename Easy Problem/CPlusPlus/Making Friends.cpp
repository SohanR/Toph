#include <iostream>
using namespace std;

int main()
{
    int roll, i;
    int c = 0;
    cin >> roll;

    for (i = 1; i < roll; i++)
    {
        if (roll % i == 0)
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}