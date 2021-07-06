#include<iostream>
using namespace std;

class Counter
{
    private:
        int count;
        int increment_step;
    public:
        Counter()
        {
            count=0;
            increment_step=0;
        }
        void setIncrementStep(int a)
        {
            increment_step=a;
        }
        void getCount()
        {
            cout<<count<<endl;
        }
        void increment()
        {
            count=count+increment_step;
        }
        void resetCount()
        {
            count=0;
        }
};

int main()
{
    Counter temp;
    int a;
    cout<<"Initially, counter= "; temp.getCount();
    cout<<"Input increment step: ";
    cin>>a;
    temp.setIncrementStep(a);
    temp.increment();
    cout<<"count= "; temp.getCount();
    temp.resetCount();
    cout<<"\nCounter has been resetted to: "; temp.getCount();
    return 0;
}
