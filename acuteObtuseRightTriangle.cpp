#include<iostream>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"Enter 3 Angles:";
    cin>>a>>b>>c;
    
   // (a+b+c==180)?(a<90&&b<90&&c<90)?cout<<"Triangle is Acute":(a>90||b>90||c>90)?cout<<"Triangle is Obtuse":cout"Triangle is Right Angles":cout<<"It is not a Triangle";
    (a+b+c!=180||a<=0|| b<=0 || c<= 0)? cout<< " Triangle not possible": (a==90||b==90||c==90)? cout<<"Triangle is Right angled": (a>90|| b>90||c>90)?cout <<"Triangle is Obtuse":cout<<"Triangle of Acute";
    return 0;
}