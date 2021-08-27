#include<bits/stdc++.h>
using namespace std;

class Person
{
protected:

    string name;
    string mobile_no;
    int age;
public:
    Person(): name(" "),mobile_no(" "),age(0)
    {}
    Person(string a, string b, int c): name(a),mobile_no(b),age(c)
    {}
    virtual void GetInfo()
    {
        cout<<"Enter Name: "; getline(cin, name);
        cout<<"Enter Mobile No: "; getline(cin, mobile_no);
        cout<<"Enter age: "; cin>>age;
    }
    virtual void ShowInfo()
    {
        cout<<"***********************************************************************************\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Mobile No: "<<mobile_no<<endl;
        cout<<"Age: "<<age<<endl;
    }
    virtual void ShowStatus()=0;
};

class Student : public Person
{
protected:
    string student_id;
    int semester;
    string department;
public:
    Student() : student_id(" "),semester(0),department(" ")
    {}
    Student(string a, int b, string c) :  student_id(a),semester(b),department(c)
    {}
    void GetInfo()
    {
        Person::GetInfo();
        cin.ignore();
        cout<<"Enter Student ID: "; getline(cin, student_id);
        cout<<"Enter Semester: "; cin>>semester;
        cin.ignore();
        cout<<"Enter Department: "; getline(cin, department);
    }
    void ShowInfo()
    {
        Person::ShowInfo();
        cout<<"Student ID: "<<student_id<<endl;
        cout<<"Semester: "<<semester<<endl;
        cout<<"Department:"<<department<<endl;
    }
    void ShowStatus()
    {
        cout<<"Year of Joining: 20"<<student_id[0]<<student_id[1]<<endl;
        if(semester>4) cout<<"Senior Student"<<endl;
        else
            cout<<"Junior Student"<<endl;
    }
};

class Employee : public Person
{
protected:
    string employee_id;
    int salary;
public:
    Employee() :  employee_id(" "),salary(0)
    {}
    Employee(string a, int b) : employee_id(a), salary(0)
    {}
    void GetInfo()
    {
        Person::GetInfo();
        cin.ignore();
        cout<<"Enter Employee ID: "; getline(cin, employee_id);
        cout<<"Enter Salary: "; cin>>salary;
    }
    void ShowInfo()
    {
        Person::ShowInfo();
        cout<<"Employee ID: "<<employee_id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    void ShowStatus()
    {
        cout<<"Year of Joining: 20"<<employee_id[0]<<employee_id[1]<<endl;
        if(salary>50000)
            cout<<"Highly Paid"<<endl;
        else
            cout<<"Lowly Paid"<<endl;
    }
};


int main()
{
    Person *ptr[2];
    for(int i=0;i<2;i++)
    {
        if(i%2==0)
            ptr[i]= new Student;
        else
            ptr[i] = new Employee;
    }
    for(int i=0;i<2;i++)
    {
        if(i%2==0)
            ptr[i]->GetInfo();
        else
            ptr[i]->GetInfo();
    }
    for(int i=0;i<2;i++)
    {
        if(i%2==0){
            ptr[i]->ShowInfo();
            ptr[i]->ShowStatus();
        }
        else{
            ptr[i]->ShowInfo();
            ptr[i]->ShowStatus();
        }
    }
}
