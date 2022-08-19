#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<fact(n);
    return 0;
}
int fact(int x)
{
    int g=1;
    if(x>1)
    {
        g=x*fact(x-1);
    }
    return g;
}