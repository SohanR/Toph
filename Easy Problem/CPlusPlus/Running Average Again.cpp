#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j = 1, N;
    double evrg = 0, x = 0;

    cin >> N;

    if (N <= 100000)
    {
        float a[N];

        for (i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < N; i++)
        {
            x += a[i];

            evrg = x / j;
            j++;

            cout << evrg << fixed << setprecision(9) << endl;
        }
    }
    return 0;
}