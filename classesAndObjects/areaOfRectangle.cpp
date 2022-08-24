#include <iostream>
using namespace std;
class area
{
    int l, ar, b;

public:
    void indata()
    {
        cout << "\nEnter l and b: ";
        cin >> l >> b;
    }
    void calc()
    {
        ar = l * b;
    }
    void outdata()
    {
        cout << ar;
    }
};
int main()
{
    area a1;
    a1.indata();
    a1.calc();
    a1.outdata();
    return 0;
}