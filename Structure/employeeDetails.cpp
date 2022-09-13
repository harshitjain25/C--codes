#include <iostream>
using namespace std;
struct employee
{
    char name[20];
    char desi[20];
    float salary;
};
int main()
{
    int sum = 0, n, count = 0;
    float avg;
    char str[] = "manager";
    cout << "Enter Number of Employees: ";
    cin >> n;
    employee e[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        cout << "Enter Name: ";
        cin.getline(e[i].name, 20);
        cout << "Enter Designation: ";
        cin.getline(e[i].desi, 20);
        cout << "Enter Salary: ";
        cin >> e[i].salary;
        int l = strcmp(str, e[i].desi);
        if (l == 0)
        {
            sum = sum + e[i].salary;
            count++;
        }
    }
    avg = sum / count;
    for (int i = 0; i < n; i++)
    {
        cout << e[i].name << "\n";
        cout << e[i].desi << "\n";
        cout << e[i].salary << "\n";
    }
    cout << "Average of Managers = " << avg;
    return 0;
}