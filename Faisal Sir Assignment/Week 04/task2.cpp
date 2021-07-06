#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
        double length;
        double width;
    public:
        Rectangle(double l=1, double w=1):length(l),width(w)
        {};
        void perimeter()
        {
            cout<<"Perimeter: "<<length+length+width+width<<endl;
        }
        void area()
        {
            cout<<"Area: "<<length*width<<endl;
        }
        void diagonal()
        {
            cout<<"Diagonal: "<<sqrt(pow(length,2) + pow(width,2))<<endl;
        }
        void angle()
        {
            cout<<"Enter length to measure angle with diagonal: ";
            double l; cin>>l;
            if(l!=length && l!=width)
                cout<<"Length not part of rectangle\n";
            else
            {
                if(l==length)
                {
                    cout<<(atan(width/length))*(180/3.1415)<<endl;
                }
                else
                    cout<<(atan(length/width))*(180/3.1415)<<endl;
            }
        }
        void setRec()
        {
            double l,w;
            int count=0;
            while(1)
            {
                cout<<"Enter length: "; cin>>l;
                if(l>=1.0 && l<20.0)
                    count++;
                else
                    cout<<"Length must be greater than or equal to 1 AND less than 20\n";
                if(count==1)
                    break;
            }
            while(1)
            {
                cout<<"Enter width: "; cin>>w;
                if(w>=1.0 && w<20.0)
                    count++;
                else
                    cout<<"Width must be greater than or equal to 1 AND less than 20\n";
                if(count==2)
                    break;
            }
            length=l; width=w;
        }
        void getRec()
        {
            cout<<"Length: "<<length<<endl;
            cout<<"Width: "<<width<<endl;
        }
};


int main()
{
    Rectangle r1,r2;
    r1.getRec();
    r2.setRec();
    r2.area();
    r2.perimeter();
    r2.diagonal();
    r2.angle();
    return 0;
}
