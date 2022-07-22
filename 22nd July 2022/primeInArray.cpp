#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 1; j <= a[i] ; j++)      //for (int j = 2; j <= a[i]/2 ; j++) 
        {                                     //{
            if (a[i] % j == 0)                //if (a[i] % j == 0)
            {                                 //{
                count++;                      //    count++;
            }                                 //}
        }                                     //}
        if (count == 2)                       //if (count == 0) 
        {                                     //{
            cout << a[i] << " ";              //    cout << a[i] << " ";
        }                                     //}
    }
    return 0;
}