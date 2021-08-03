#include<bits/stdc++.h>
using namespace std;

class Staff
{
    private:
        void about()
        {
            cout<<"About staff: \n";
        }
    protected:
        int code;
        string name;
    public:
        void getStaffInfo()
        {
            cout<<"\nWhat is staff name?: ";
            getline(cin,name);
            cout<<"What is staff code?: ";
            cin>>code;
            cin.ignore();
        }
        void putStaffInfo()
        {
            about();
            cout<<"Name: "<<name<<endl;
            cout<<"Code: "<<code<<endl;
        }
        void WhoAmI()
        {
            cout<<"I am a staff ";
        }
};

class Typist : public Staff
{
    private:
        string aboutTypist="About typist: \n";
    protected:
        double speed;
    public:
        void getTypistInfo()
        {
            Staff::getStaffInfo();
            cout<<"What is his/her speed?: ";
            cin>>speed;
        }
        void putTypistInfo()
        {
            cout<<aboutTypist;
            Staff::putStaffInfo();
            cout<<"Speed: "<<speed<<endl;
        }
        void WhoAmI()
        {
            Staff::WhoAmI();
            cout<<"- typist ";
        }
};

class Teacher : public Staff
{
    private:
        void aboutteach()
        {
            cout<<"cbdshbfcdsj\n";
        }
    protected:
        string subject;
        string publication;
    public:
        void getTeacherInfo()
        {
            Staff::getStaffInfo();
            cout<<"What subject does he/she teach?: ";
            getline(cin,subject);
            cout<<"Publication name?: ";
            getline(cin,publication);
        }
        void putTeacherInfo()
        {
            aboutteach();
            Staff::putStaffInfo();
            cout<<"Subject: "<<subject<<endl;
            cout<<"Publication: "<<publication<<endl;
        }
        void WhoAmI()
        {
            Staff::WhoAmI();
            cout<<"- teacher";
        }
};

class Officer : public Staff
{
    private:
        string aboutOfficer="About officer: \n";
    protected:
        string grade;
    public:
        void getOfficerInfo()
        {
            Staff::getStaffInfo();
            cout<<"What is his/her grade?: ";
            getline(cin,grade);
        }
        void putOfficerInfo()
        {
            cout<<aboutOfficer;
            Staff::putStaffInfo();
            cout<<"Category: "<<grade<<endl;
        }
        void WhoAmI()
        {
            Staff::WhoAmI();
            cout<<"- officer";
        }
};

class Casual : public Typist
{
    private:
        string aboutCasual="About casual typist: \n";
    protected:
        int wage;
    public:
        void getCasualInfo()
        {
            Typist::getTypistInfo();
            cout<<"What is his/her wage?: ";
            cin>>wage;
        }
        void putCasualInfo()
        {
            cout<<aboutCasual;
            Typist::putTypistInfo();
            cout<<"Wage: "<<wage<<endl;
        }
        void WhoAmI()
        {
            Typist::WhoAmI();
            cout<<"- casual";
        }
};

class Regular : public Typist
{
    private:
        string aboutRegular="About regular typist: \n";
    protected:
        int wage;
    public:
        void getRegularInfo()
        {
            Typist::getTypistInfo();
            cout<<"What is his/her wage?: ";
            cin>>wage;
        }
        void putRegularInfo()
        {
            cout<<aboutRegular;
            Typist::putTypistInfo();
            cout<<"Wage: "<<wage<<endl;
        }
        void WhoAmI()
        {
            Typist::WhoAmI();
            cout<<"- regular";
        }
};

int main()
{
    Teacher t;
    t.getTeacherInfo(); t.putTeacherInfo(); t.WhoAmI();
    Officer o;
    o.getOfficerInfo(); o.putOfficerInfo(); o.WhoAmI();
    Casual c;
    c.getCasualInfo(); c.putCasualInfo(); c.WhoAmI();
    Regular r;
    r.getRegularInfo(); r.putRegularInfo(); r.WhoAmI();
    Typist typ;
    typ.getTypistInfo(); typ.putTypistInfo(); typ.WhoAmI();
    Staff s;
    s.getStaffInfo(); s.putStaffInfo(); s.WhoAmI();
    return 0;
}
