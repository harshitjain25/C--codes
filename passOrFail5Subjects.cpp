#include<iostream>
using namespace std;
int main()
{

    int m1,m2,m3,m4,m5,c=0;
    cout<<"Enter marks of 5 Subjects out of 100: ";
    cin>>m1>>m2>>m3>>m4>>m5;

    c=(m1>=33)?c+1:c;
    c=(m2>=33)?c+1:c;
    c=(m3>=33)?c+1:c;
    c=(m4>=33)?c+1:c;
    c=(m5>=33)?c+1:c;
    (c==0)?cout<<"Student is fail in all 5 Subjects":cout<<"Student is passed in"<<c<<"subjects";
    return 0;
}