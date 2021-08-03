#include<bits/stdc++.h>
using namespace std;

class Counter
{
    private:
        int count;
        int incrementStep;
    public:
        Counter():count(0), incrementStep(1)
        {}
        Counter(int key): count(key)
        {}
        void setIncrementStep(int key)
        {
            incrementStep=key;
        }
        void getCount()
        {
            cout<<"count: "<<count<<endl;
        }
        void increment()
        {
            count=count+incrementStep;
        }
        void resetCount()
        {
            count=0;
        }
        void operator =(int var)
        {
            count=var;
        }
        Counter operator +(const Counter &right) const
        {
            return Counter(count+right.count);
        }
        Counter operator +(const int &right) const
        {
            return Counter(count+right);
        }
        void operator +=(const Counter &right)
        {
            count=count+right.count;
        }
        Counter operator++()
        {
            return Counter(++count);
        }
        Counter operator++ (int)
        {
            return Counter(count++);
        }
        friend Counter operator +(int left, Counter right);
};

Counter operator +(int left, Counter right)
{
    return Counter(left+right.count);
}

int main()
{
    Counter c1,c2,c3(5);
    c3.getCount();
    c3.setIncrementStep(2);
    c3.increment();
    c3.getCount();
    c2=6;
    c2.getCount();
    c1=c2+c3;
    c1.getCount();
    c1=c2+4; c1.getCount();
    c1=4+c2; c1.getCount();
    c2++; c2.getCount();
    ++c2; c2.getCount();
    c2+=c3; c2.getCount();
}







