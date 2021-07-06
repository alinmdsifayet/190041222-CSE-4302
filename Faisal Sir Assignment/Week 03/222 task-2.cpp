#include<iostream>
using namespace std;

class RationalNumber
{
    private:
        double numerator;
        double denominator;
    public:
        RationalNumber()
        {
            numerator=0;
            denominator=1;
        }
        void assign(double a,double b)
        {
            numerator=a;
            if(b!=0) denominator=b;
            else
                cout<<"Will create undefined number!\n";
        }
        double convert()
        {
            return (numerator/denominator);
        }
        void invert()
        {
            if(numerator!=0)
            {
               swap(numerator,denominator);
                /*int temp;
                temp=denominator;
                denominator=numerator;
                numerator=temp;*/
            }
            else
                cout<<"Can't invert as undefined number produced!\n";
        }
        void print()
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
};

int main()
{
    RationalNumber fraction;
    double n,d;
    cout<<"Enter Numerator: "; cin>>n;
    cout<<"Enter Denominator: "; cin>>d;
    fraction.assign(n,d);
    cout<<"Fraction: "; fraction.print();
    double decimal=fraction.convert();
    cout<<"Decimal= "<<decimal<<endl;
    cout<<"Inverting the number.....\n";
    fraction.invert();
    fraction.print();
    return 0;
}
