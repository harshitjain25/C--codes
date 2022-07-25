#include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n, max = INT_MIN, product = 1,count;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int a[n];
//     cout << "Enter elements of array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         product = product * a[i];
//     }
//     for (int i = max; i <= product; i=i+max)
//     {
//         count=0;
//         for(int j=i;j<n;j++)
//         {
//             if(i%a[j]==0)
//             {
//                 count++;
//             }
//         }
//         if(count==n)
//         {
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }