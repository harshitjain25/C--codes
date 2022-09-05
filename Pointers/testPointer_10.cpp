#include <iostream>
using namespace std;
int main()
{
    
    int m,n;
    cin >> m >> n;
    int *a[m];
    for (int i = 0; i < m; i++)
    {
        a[i]=new int [n];
    }
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cin>> *(*(a + i) + j);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout<<"\n";
        for (int j = 0; j < n; j++)
        {
           cout<< *(*(a + i) + j)<<" ";
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout<<"\n";
        for (int j = 0; j < n; j++)
        {
           cout<< (*(a + i) + j)<<" ";
        }
    }
    return 0;
}
