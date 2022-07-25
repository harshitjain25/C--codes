// #include <iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cout << "Enter size of first array\n";
//     cin >> m;
//     cout << "Enter size of second array\n";
//     cin >> n;
//     int a[m], b[n], c[m + n];
//     int COUNT1 = 0, COUNT2 = 0, COUNT3 = 0, COUNT4 = 0;
//     cout << "Enter elements of first array\n";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter elements of second array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     for (int j = 0; j < m; j++)
//     {

//         if (a[j] % 2 == 0)
//         {
//             c[COUNT1] = a[j];
//             COUNT1++;
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         if (b[k] % 2 == 0)
//         {
//             c[COUNT1 + COUNT2] = b[k];
//             COUNT2++;
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (a[i] % 2 != 0)
//         {
//             c[COUNT1 + COUNT2 + COUNT3] = a[i];
//             COUNT3++;
//         }
//     }
//     for (int k = 0; k < n; k++)
//     {
//         if (b[k] % 2 != 0)
//         {
//             c[COUNT1 + COUNT2 + COUNT3 + COUNT4] = b[k];
//             COUNT4++;
//         }
//     }
//     for (int i = 0; i < m + n; i++)
//     {
//         cout << c[i] << " ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int a[n], b[m],c[m+n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }

    for(int k=0;k<n;k++)
    {
       
        if(a[k]%2==0)
        {
            c[count]=a[k];
            count++;
        }
    }
    
    for(int k=0;k<m;k++)
    {
        
            if(b[k]%2==0)
            {
                c[count]=b[k];
                count++;
            }
    }
    
    for(int k=0;k<n;k++)
    {
       
            if(a[k]%2!=0)
            {
                c[count]=a[k];
                count++;
            }
    }
    
    for(int k=0;k<m;k++)
    {
            if(b[k]%2!=0)
            {
                c[count]=b[k];
                count++;
            }
    }
    

    for(int l=0;l<m+n;l++)
    {
        cout<<c[l]<<" ";
    }
}