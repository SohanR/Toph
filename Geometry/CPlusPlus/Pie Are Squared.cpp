#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A = 0, r = 0, pi = 3.141592653589793;

    cin >> r;
    A = pi * r * r;
    cout << setprecision(8) << A;
    return 0;
}
