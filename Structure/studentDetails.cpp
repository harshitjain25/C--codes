#include<iostream>
using namespace std;
struct student
{
    int m1,m2;
    float avg;
}s;
int main()
{
    student *p;
    p=&s;
    cout<<"Enetr Marks: ";
    cin>>s.m1>>s.m2;
    s.avg=s.m1+s.m2/2;
    cout<<s.avg<<" ";
    cout<<(*p).m1<<" ";
    cout<<(*p).m2<<" ";
    cout<<p->m1<<" ";
    cout<<p->m2<<" ";
    return 0;

}