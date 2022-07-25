#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN, product = 1, count;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
        product = product * a[i];
    }
    for (int i = max; i <= product; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "LCM: "<<i<<"\n";
            break;
        }
    }
    return 0;
}
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n, max=INT_MIN, mult=1, lcm ,count=0;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         mult=mult*a[i];
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     for(int j=max;j<=mult ; j+=max)
//     {
//         count=0;
//         for(int k=0 ; k<n ; k++)
//         {
//             if(j%a[k]==0)
//             {
//                 count++;
//             }
//         }
//             if(count==n)
//             {

//                 cout<<j;
//                 break;
//             }

//     }
//     return 0;
// }