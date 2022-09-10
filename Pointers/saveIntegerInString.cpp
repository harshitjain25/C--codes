#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,k,i=0;
    char s[20];
    cout<<"Enter a Number: ";
    cin>>n;
    while (n>0)
    {
        
        k=n%10;        
        n=n/10;       
        s[i]=k+48;     
        i++;       
    }
    s[i]='\0';
    
    cout<<s;
    return 0;
    

}
