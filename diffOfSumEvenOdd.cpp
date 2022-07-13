#include<iostream>
using namespace std;
int main()
{
    int n,x,o=0,e=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        if(x%2==0)
        {
            e=e+x*x;
        }
        else
        o=o+x*x;

    }
    cout<<o-e;
    return 0;
}