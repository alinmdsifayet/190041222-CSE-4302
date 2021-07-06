#include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
        string EmpName;
        int ID;
        int age;
        double salary;
        void getStatus()
        {
            if(age<=25 && salary<=20000) cout<<"Low";
            else if(age<=25 && salary>20000) cout<<"Moderate";
            else if(age>25 && salary<=21000) cout<<"Low";
            else if(age>25 && salary>21000 && salary<=60000) cout<<"Moderate";
            else if(age>25 && salary>60000) cout<<"High";
        }
    public:
        Employee(): EmpName(" "),ID(0),age(0),salary(0)
        {};
        Employee(string name, int id, int empage, double sal): EmpName(name), ID(id), age(empage), salary(sal)
        {};
        void feedInfo()
        {
            string name;
            int id,empage;
            double sal;
            cout<<"Enter employee name: ";
            cin>>name; EmpName=name;
            cout<<"Enter employee ID: ";
            cin>>id; ID=id;
            cout<<"Enter employee age: ";
            cin>>empage; age=empage;
            cout<<"Enter employee salary: ";
            cin>>sal; salary=sal;
        }
        void showInfo()
        {
            cout<<"************************************************************************\n";
            cout<<"Employee Name: "<<EmpName<<endl;
            cout<<"Employee ID: "<<ID<<endl;
            cout<<"Employee age: "<<age<<endl;
            cout<<"Employee salary: "<<salary<<endl;
            getStatus();
            cout<<" Salaried Person\n";
        }
};


int main()
{
    Employee emp1,emp2,emp3;
    emp1.feedInfo();
    emp2.feedInfo();
    emp3.feedInfo();
    emp1.showInfo();
    emp2.showInfo();
    emp3.showInfo();
    return 0;
}
