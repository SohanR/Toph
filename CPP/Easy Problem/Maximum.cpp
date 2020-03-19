#include<iostream>
using namespace std;
int main()
{
    int n,i;


    cin >> n;

    int arr[n];

     for(i = 0; i < n; ++i)
    {
       cin >> arr[i];
    }

    for(i = 1;i <n;++i)
    {

       if(arr[0] < arr[i])

        arr[0] = arr[i];

       //arr[i]=arr[0];

    }

 cout <<arr[0];

   return 0;
}
