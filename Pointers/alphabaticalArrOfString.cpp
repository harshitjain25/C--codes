#include<iostream>
using namespace std;
int main()
{
    int n=5,l;
    char t[20];
    char s[5][20];
    for(int i=0;i<5;i++)
    {
        cin.getline(s[i],20,'\n');
    }
    for(int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            
        
        
        l=strcmp(s[j],s[j+1]);
        if(l>0)
        {
            strcpy(t,s[j]);

            strcpy(s[j],s[j+1]);
            strcpy(s[j+1],t);
        }
        }

    }
    cout<<"\n";



    for(int i=0;i<5;i++)
    {
    cout<<s[i]<<"\n";
    }
    return 0;
}