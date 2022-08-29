#include <iostream>
using namespace std;
int main()
{
    int *b, a;
    cout << "Enter a number: ";
    cin >> a;
    b = &a;
    (*b)++;
    cout << "\nValue a= " << a;                    // a ki value
    cout << "\nValue &a = " << &a;                 // address of a
    cout << "\nValue b= " << b;                    // adress of a stored in b pointer (because normal int cannot store address)
    cout << "\nValue *b= " << *b;                  // value at the address which is stored in pointer b i.e. value of a
    cout << "\nValue &b= " << &b;                  // address of b
    b++;                                           // address of a is incremented in terms of int/double/float i.e. 4 bytes/8 bytes/etc.
    cout << "\nValue of new address in b = " << b; // address stored in b is increamented by 4 bytes and b is not pointing a anymore
    cout << "\nValue new b= " << *b;               // garbage value because we don't know the value at increamented address
    return 0;
}