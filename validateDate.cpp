#include <iostream>
using namespace std;
int main()
{
    int d, m, y;
    cout << "Enter date with month and year";
    cin >> d >> m >> y;
    if (m > 12 || d > 31 || m < 1 || d < 1)
    {
        cout << "Date is invalid";
    }
    else if (m == 2 && y % 4 == 0 && d <= 29)
    {
        cout << "Date is valid";
    }
    else if (m == 2 && d <= 28)
    {
        cout << "Date is valid";
    }
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        cout << "Date is invalid";
    else
        cout << "Date is valid";
    return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
    int d,m,y,md;
    cout << "Enter date with month and year";
    cin >> d >> m >> y;
    if (m > 12 || d > 31 || m < 1 || d < 1)
    md=0;
    else if(m==2)
    {
        md=(y%4==0)?29:28;
    }
    else if(m==4||m==6||m==9||m==11)
    md==30;
    else
    md==31;
    if(d>=1&&d<=md)
    cout<<"date is valid";
    else
    cout<<"date is invalid";
    return 0;
}
