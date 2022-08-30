#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    int a[n];
    a++;

    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
    for (int i = 0; i < n; i++)
    {
        // cout << *(a + i) << " ";
        // cout << a + i << "\n";
        cout<<i[a]<<" ";
    }
    return 0;
}