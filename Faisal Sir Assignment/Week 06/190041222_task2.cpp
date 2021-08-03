#include<bits/stdc++.h>
using namespace std;

class Coordinate
{
    private:
        float x;
        float y;
    public:
        Coordinate(): x(0),y(0)
        {}
        Coordinate(float a, float b): x(a),y(b)
        {}
        void getDistance()
        {
            cout<<sqrt(pow(x,2)+pow(y,2))<<endl;
        }
        void getDistance(Coordinate c)
        {
            cout<<sqrt(pow(x-c.x,2)+pow(y-c.y,2))<<endl;
        }
        void move_x(float key)
        {
            x=x+key;
        }
        void move_y(float key)
        {
            y=y+key;
        }
        void move(int key)
        {
            move_x(key);
            move_y(key);
        }
        void display()
        {
            cout<<"x co-ordinate: "<<x<<endl;
            cout<<"y co-ordinate: "<<y<<endl;
        }
        void getCoOrdinate()
        {
            float a,b;
            cout<<"Enter X: "; cin>>a;
            cout<<"Enter Y: "; cin>>b;
            x=a; y=b;
        }

        Coordinate operator++()
        {
            return Coordinate(++x,++y);
        }
        Coordinate operator++(int)
        {
            return Coordinate(x++,y++);
        }
        Coordinate operator--()
        {
            return Coordinate(--x,--y);
        }
        Coordinate operator--(int)
        {
            return Coordinate(x--,y--);
        }
        bool operator >(Coordinate right)
        {
            float distanceR=sqrt(pow(x,2)+pow(y,2));
            float distanceL=sqrt(pow(right.x,2)+pow(right.y,2));
            return distanceR>distanceL;
        }
        bool operator <(Coordinate right)
        {
            float distanceR=sqrt(pow(x,2)+pow(y,2));
            float distanceL=sqrt(pow(right.x,2)+pow(right.y,2));
            return distanceR<distanceL;
        }
        bool operator >=(Coordinate right)
        {
            float distanceR=sqrt(pow(x,2)+pow(y,2));
            float distanceL=sqrt(pow(right.x,2)+pow(right.y,2));
            return distanceR>=distanceL;
        }
        bool operator <=(Coordinate right)
        {
            float distanceR=sqrt(pow(x,2)+pow(y,2));
            float distanceL=sqrt(pow(right.x,2)+pow(right.y,2));
            return distanceR<=distanceL;
        }
        bool operator ==(Coordinate right)
        {
            float distanceR=sqrt(pow(x,2)+pow(y,2));
             float distanceL=sqrt(pow(right.x,2)+pow(right.y,2));
            return distanceR==distanceL;
        }
        bool operator !=(Coordinate right)
        {
            float distanceR=sqrt(pow(x,2)+pow(y,2));
            float distanceL=sqrt(pow(right.x,2)+pow(right.y,2));
            return distanceR!=distanceL;
        }
        ~Coordinate()
        {
            cout<<"Destroying point with x co-ordinate: "<<x<<" and y co-ordinate: "<<y<<endl;
        }
};


int main()
{
    Coordinate c1,c2(1,1),c3(3,4);
    c3.getDistance();
    c3.move(1);
    c3.getDistance();
    c3.getDistance(c2);
    cout<<"Enter c1\n";
    c1.getCoOrdinate();
    if(c1>c2)
        cout<<"c1>c2\n";
    else if(c1<c2)
        cout<<"c1<c2\n";
    if(c1==c2)
        cout<<"c1=c2\n";
    else if(c1!=c2)
        cout<<"c1!=c2\n";
    return 0;
}








