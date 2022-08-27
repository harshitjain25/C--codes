#include<iostream>
using namespace std;
int s=0;
int sum(int l)
{
    s=s+l;
    return s;
}
int main()
{
    int k,i;
    for(int i=1;i<=3;i++)
    {
        k=sum(i);
        cout<<k<<" ";
    }
    return 0;
}