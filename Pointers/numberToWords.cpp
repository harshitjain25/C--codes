#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char a1[][20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char a2[][20] = {"Ten", "Eleven", "Twelve", "Thirteen", "Forteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char a3[][20] = {"Hundered", "Thousand", "Lakh", "Crore"};
    char a4[][20] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    int n, t, count=0, q;
    cout << "Enter Number: ";
    cin >> n;
    t = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    int c = count - 2;
    while (t > 999)
    {

        int p = pow(10, c);
        q = t / p;
        t = t % p;

        if (q > 10 && q < 20)
        {
            cout << a2[q - 11];
        }
        else
        {
            cout << a4[q / 10 - 2];
            cout << " ";
            cout << a1[q % 10]<<" ";
        }
        cout<<a3[c/2]<<" ";
        cout<<" ";
        c=c-2;
        
    }
    return 0;
}
