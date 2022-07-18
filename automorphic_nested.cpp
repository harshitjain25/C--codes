#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, m, n, temp, y, s,count;
    cin >> m >> n;
    for (i = m; i <= n; i++)
    {

        s = i * i;
        temp = i;
       
        count=0;

        while (temp > 0)
        {

            temp = temp / 10;
            count++;
        }
        y = s % (int)pow(10, count);
        if (y == i)
        {
            cout << y << " ";
        }
    }
    return 0;
}