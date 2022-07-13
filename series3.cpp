//1+1/2+1/3+1/4+1/5......
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    sum=sum+1.0/i;     //or define i in float
    }
    cout<<"sum is"<<sum;
}