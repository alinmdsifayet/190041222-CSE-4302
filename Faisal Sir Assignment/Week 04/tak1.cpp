#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
    private:
        static int accountCount;
        int accountNo;
        string accountName;
        int accountType;
        double accountBalance;
        double minBalance;
    public:
        BankAccount(): accountName(" "),accountType(0),accountBalance(0.0),minBalance(500)
        {
            accountNo=accountCount;
            accountCount++;
        };
        BankAccount(string name, int type, double balance): accountName(name),accountType(type),accountBalance(balance),minBalance(500)
        {
            accountNo=accountCount;
            accountCount++;
        };
        void createAccount()
        {
            int number, type,flag=0;
            string name;
            double balance,minbal=500;
            cout<<"Enter name: ";
            cin>>name; accountName=name;
            cout<<"Enter account type\n 1. Press 1 for Current A/C\n 2. Press 2 for Fixed A/C\n Option: ";
            cin>> type; accountType=type;
            while(1)
            {
                cout<<"Enter initial amount to deposit (minimum 500): ";
                cin>>balance;
                if(balance<minbal)
                    cout<<"Initial Deposit must be greater than 500!\n";
                else
                    flag=1;
                if(flag==1)
                    break;
            }
            accountBalance=balance;
        }
        void showInfo()
        {
            cout<<"*************************************************************************************\n";
            cout<<"Account NO: "<<accountNo<<endl;
            cout<<"Account Holder's Name: "<<accountName<<endl;
            if(accountType==1) cout<<"Current Account\n";
            else if(accountType==2) cout<<"Fixed Account\n";
            cout<<"Current Account Balance: "<<accountBalance<<endl;
        }
        void deposit(double x)
        {
            accountBalance=accountBalance+x;
        }
        void withdraw(double x)
        {
            if(accountBalance-x > minBalance)
            {
                cout<<"Successfully withdrawn "<<x<<endl;
                accountBalance=accountBalance-x;
            }
            else
                cout<<"Can't withdraw amount. Insufficient money\n";
        }
        void giveInterest()
        {
            double interest;
            interest=accountBalance*0.03;
            interest=interest*0.9;
            accountBalance=accountBalance+interest;
        }
        ~BankAccount()
        {
            cout<<"Account of "<<accountName<<" with account no "<<accountNo<<" is destroyed with a balance of BDT "<<accountBalance<<endl;
        }

        //Account of Mr. X with account no 1234 is destroyed with a balance BDT 5000
};

int BankAccount::accountCount=1;


int main()
{
    BankAccount acc1,acc2,acc3;
    acc1.createAccount();
    acc2.createAccount();
    acc3.createAccount();
    acc2.showInfo();
    acc2.deposit(5000);
    acc2.showInfo();
    acc2.giveInterest();
    acc2.showInfo();
}
