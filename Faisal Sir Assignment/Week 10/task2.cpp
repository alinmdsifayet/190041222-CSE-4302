#include<bits/stdc++.h>
using namespace std;

class Salary
{
private:
    int payment;
    int increment;
public:
    Salary() : payment(0), increment(0){}
    Salary(int a, int b) : payment(a), increment(b) {}
    void getInfo()
    {
        cout<<"Enter Salary: "; cin>>payment;
        cout<<"Enter Increment Every Year: "; cin>>increment;
    }
    void showInfo()
    {
        cout<<"Salary: "<<payment<<endl;
        cout<<"Increment every Year: "<<increment<<endl;
    }
    Salary(Salary& s)
    {
        payment=s.payment;
        increment=0;
    }
    Salary operator =(const Salary& s)
    {
        payment=s.payment;
        increment=0;
    }
};

class Counter
{
private:
    int count;
    int step;
public:
    Counter() : count(0), step(0){}
    Counter(int a, int b) : count(a), step(b) {}
    void information()
    {
        cout<<"Enter Count: "; cin>>count;
        cout<<"Enter Step: "; cin>>step;
    }
    void display()
    {
        cout<<"Count: "<<count<<endl;
        cout<<"Step: "<<step<<endl;
    }
};

class Copy
{
private:
    int data;
    Copy operator = (const Copy& c)
    {
        data=c.data;
    }
    Copy(Copy& c)
    {
        data=c.data;
    }
public:
    Copy():data(0){}
    Copy(int a):data(a){}
    void getData()
    {
        cout<<"Input Data: "; cin>>data;
    }
    void showData()
    {
        cout<<"Data: "<<data<<endl;
    }
};

int main()
{
    Salary s1,s2;
    s1.getInfo();
    s2=s1;
    s2.showInfo();
    Salary s3=s1;
    s3.showInfo();


    Counter c1,c2;
    c1.information();
    c2=c1;
    c2.display();
    Counter c3=c1;
    c3.display();

    /*Copy d1;
    d1.getData();
    Copy d2=d1;*/
}






