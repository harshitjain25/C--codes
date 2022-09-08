#include <iostream>
using namespace std;
int main()
{
    int *a[2], b[2];
    
    for (int i = 0; i < 2; i++)
    {   
        cout<<"\nEnter no. of columns ";
        cin>>b[i];
        a[i]= new int[b[i]];
        cout<<"\nRow  "<<*(a+i)<<"  ";
        for (int j = 0; j < b[i]; j++)
        {
            cin >> *(*(a + i) + j);
        }
    }
    /*int *k;
    k=a[0];
    for (int i = 0; i < 6; i++)
    {
        cout<<*k<<" ";
        k++;
    }*/
    for (int i = 0; i < 2; i++)
    {   
        cout<<"\n";
        for (int j = 0; j < b[i]; j++)
        {
            cout<<*(*(a + i) + j) <<" ";
        }
    }

}
    