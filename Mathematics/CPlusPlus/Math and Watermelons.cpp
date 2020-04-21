#include <iostream>
using namespace std;

int main()
{

    int M, K, r;

    cin >> M;
    cin >> K;

    if (K < M < 1000000 && 0 < K < 100)
    {

        r = M % K;
    }

    cout << r << endl;

    return 0;
}