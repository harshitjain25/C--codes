#include <iostream>
using namespace std;
int main()
{
    int m, n, sum, count, avg, avgpassmarks;
    cout << "Enter number of students:";
    cin >> m;
    cout << "Enter number of subjects:";
    cin >> n;
    int a[m][n];
    cout << "Enter marks for each students of all subjects\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        avg = sum / n;
        cout << "Average of student " << i + 1 << " = " << avg << "\n";
    }
    for (int j = 0; j < n; j++)
    {
        sum = 0;
        count = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[i][j] >= 33)
            {
                sum = sum + a[i][j];
                count++;
            }
        }
        avgpassmarks = sum / count;
        cout << "Average pass marks of subject " << j + 1 << " = " << avgpassmarks << "\n";
    }
    return 0;
}