#include<iostream>
using namespace std;
int main()
{
    int n=5;
    char s[10][20];
    for(int i=0;i<n;i++)
    {
        cin.getline(s[i],20,'\n');
    }
    cout<<s;
    return 0;
}