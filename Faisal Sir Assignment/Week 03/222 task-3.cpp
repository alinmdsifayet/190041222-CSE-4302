#include<iostream>
using namespace std;

class Medicine
{
    private:
        string name;
        string GenericName;
        double unitPrice;
        double discountPercent;
    public:
        Medicine()
        {
            unitPrice=0;
            discountPercent=5;
        }
        void assignName(string a, string b)
        {
            name=a;
            GenericName=b;
        }
        void assignPrice(double a)
        {
            unitPrice=a;
        }
        void setDiscountPercent(double a)
        {
            discountPercent=a;
        }
        double getSellingPrice()
        {
            double discount=unitPrice*(discountPercent/100);
            return unitPrice-discount;
        }
        void display()
        {
            cout<<"\n"<<name<<"("<<GenericName<<") "<<"has a unit price of Tk."<<unitPrice<<" . Current Discount - "<<discountPercent<<"%"<<endl;
        }
};


int main()
{
    Medicine tablet;
    string name,generic_name;
    cout<<"Tablet Name ? Ans: "; cin>>name;
    cout<<"Generic name? Ans: "; cin>>generic_name;
    tablet.assignName(name, generic_name);
    cout<<"What is the price of the medicine? Ans: ";
    double price;
    cin>>price;
    tablet.assignPrice(price);
    cout<<"Is there any discount on medicine? Ans (Type 0 for no discount) : ";
    double discount;
    cin>>discount;
    tablet.setDiscountPercent(discount);
    double selling_price=tablet.getSellingPrice();
    tablet.display();
    cout<<"Current selling price: "<<selling_price<<endl;
    return 0;
}
