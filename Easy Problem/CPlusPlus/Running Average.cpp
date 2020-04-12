#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N,i,j=1;
    double evrg=0,x=0;


    cin>>N;
    
    if(N<100)
    {
        int a[N];

        for(i=0;i<N;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<N;i++)
        {
            x+=a[i];

            evrg=x/j;
            j++;
            
            cout<<evrg<<fixed<<setprecision(9)<<endl;
        }
    }
return 0;
}