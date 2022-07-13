#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,i;
    cout<<"Enter 5 number: ";
    cin>>a>>b>>c>>d>>e;
    i=a;
    i=(b>i)?b:i;
    i=(c>i)?c:i;
    i=(d>i)?d:i;
    i=(e>i)?e:i;

    cout<<"Largest number is "<<i<<"";
    return 0;

}