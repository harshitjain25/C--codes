#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin >> n;
    int a[n];
    cout << "enter elements of array \n";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
   
    for (int i = 0; i < n; i++)
    {
        
        
            for (int j = i+1; j < n -1; j++)
            {
                if(a[i]==a[j])
                {
                a[j] = a[j + 1];
                i--;
                n--;
               
            }}
            
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}