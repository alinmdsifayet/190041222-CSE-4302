#include<bits/stdc++.h>
using namespace std;

class FloatNumber
{
    private:
        float number;
    public:
       FloatNumber(): number(0)
       {}
       FloatNumber(float key): number(key)
       {}
       void operator =(float key)
       {
           number=key;
       }
       void display()
       {
           cout<<number;
       }
       FloatNumber operator+(const FloatNumber &right) const
       {
           return FloatNumber(number+right.number);
       }
       FloatNumber operator- (const FloatNumber &right) const
       {
           return FloatNumber(number-right.number);
       }
       FloatNumber operator/ (const FloatNumber &right) const
       {
           return FloatNumber(number/right.number);
       }
       FloatNumber operator* (const FloatNumber &right) const
       {
           return FloatNumber(number*right.number);
       }
};


int main()
{
    FloatNumber f1,f2,f3,f4;
    f1=8.6;
    f2=10.4;
    f3=f1+f2;
    f4=f1-f2;
    cout<<"f1+f2="; f3.display(); cout<<"\n";
    cout<<"f1-f2= "; f4.display();cout<<"\n";
    f3=f1/f2;
    f4=f1*f2;
    cout<<"f1/f2="; f3.display();cout<<"\n";
    cout<<"f1*f2= "; f4.display();cout<<"\n";
}
