// 1 - d Array 4 1 2 6 3 5 8  
// 2 - d Array // 4  2  6  8  0  0  0 
               // 0  0  0  0  1  3  5
#include <iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout << "Enter size of 1d Array:";
    cin >> n;
    int a[n], b[10][10] = {0};
    cout << "Enter elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j <n;j++ )
        {
            if(i == 0 && a[j] % 2 == 0)
            {
                b[i][k] = a[j];
                k++;
            }
            else if(i == 1 && a[j] % 2 !=0)
            {
                b[i][k]=a[j];
                k++;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << b[i][j]<<" ";
        }
    }
    return 0;
}
             