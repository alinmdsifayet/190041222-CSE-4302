#include <bits/stdc++.h>
using namespace std;

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    string productName;
public:

    Furniture(double p,double d,Material m):price(0),discount(0),madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setProductName()
    {
        cout<<"What is the name of the product?: ";
        string name;
        cin>>name;
        productName=name;
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    double getprice()
    {
        return price;
    }
    double getDiscount()
    {
        return discount;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("Foam");
    }
    virtual void productDetails()
    {
        cout<<"---------------------------------------\n";
        cout<<"Regular Price: "<<price<<endl;
        cout<<"Discounted Price: "<<price-discount<<endl;
        cout<<"Material: "<<getMadeof()<<endl;
        cout<<"Product Name: "<<productName<<endl;
    }
};

void sort_furniture_discount(Furniture **pp,int n);
void order(Furniture **pp1, Furniture **pp2);
bool comp(Furniture *a, Furniture *b);

enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
protected:
    BedSize size;
public:
    Bed(double p,double d,Material m,BedSize b): Furniture(p,d,m)
    {
        setBedSize(b);
    }
    void setBedSize(BedSize val)
    {
        size=val;
    }
    string getBedSize()
    {
        if(size==BedSize::Single)
            return string("Single");
        else if(size==BedSize::SemiDouble)
            return string("SemiDouble");
        else if(size==BedSize::Double)
            return string("Double");
        else
            return string("");
    }
    void productDetails()
    {
        Furniture::productDetails();
        cout<<"Bed Size: "<<getBedSize()<<endl;
    }
};

enum class SeatNumber {One,Two,Three,Four,Five};

class Sofa:public Furniture
{
protected:
    SeatNumber seat;
public:
    Sofa(double p,double d,Material m,SeatNumber s): Furniture(p,d,m)
    {
        setSeatNumber(s);
    }
    void setSeatNumber(SeatNumber val)
    {
        seat=val;
    }
    string getSeatNumber()
    {
        if(seat==SeatNumber::One)
            return string("Single");
        else if(seat==SeatNumber::Two)
            return string("Two");
        else if(seat==SeatNumber::Three)
            return string("Three");
        else if(seat==SeatNumber::Four)
            return string("Four");
        else if(seat==SeatNumber::Five)
            return string("Five");
        else
            return string("");
    }
    void productDetails()
    {
        Furniture::productDetails();
        cout<<"Seat Number: "<<getSeatNumber()<<endl;
    }
};

enum class ChairCount {Two,Four,Six};

class DiningTable:public Furniture
{
protected:
    ChairCount chair;
public:
    DiningTable(double p,double d,Material m,ChairCount c): Furniture(p,d,m)
    {
        setChairCount(c);
    }
    void setChairCount(ChairCount val)
    {
        chair=val;
    }
    string getChairCount()
    {
        if(chair==ChairCount::Two)
            return string("Two");
        else if(chair==ChairCount::Four)
            return string("Four");
        else if(chair==ChairCount::Six)
            return string("Six");
        else
            return string("");
    }
    void productDetails()
    {
        Furniture::productDetails();
        cout<<"Chair Count: "<<getChairCount()<<endl;
    }
};

/**task 4
sort_furniture_discount will sort the array in descending order based on their discount price.
You may need to add some member functions
**/
void sort_furniture_discount(Furniture *furnitures[],int no_of_furnitures);


int main()
{
    Furniture* f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000,123,Material::Wood,BedSize::Single);
    f_list[1] = new Sofa(11000,234,Material::Steel,SeatNumber::Five);
    f_list[2] = new DiningTable(13000,345,Material::Wood,ChairCount::Four);
    f_list[3] = new Bed(10090,123,Material::Wood,BedSize::Single);

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }

    for(int i=0;i<4;i++)
    {
        f_list[i]->setProductName();
    }

    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    sort_furniture_discount(f_list,4);
    cout<<"******************************Sorted**********************************"<<endl;
    for(int i=0; i<4; i++)
    {
        f_list[i]->productDetails();
    }
    /**task 4 ends here*/

}
/*bool comp(Furniture *a, Furniture *b)
{
    return ((a->getprice()- a->getDiscount) > (b->getprice() - b->getDiscount));
}*/
void order(Furniture** pp1, Furniture** pp2)
{
    double x,y;
    if(((*pp1)->getprice() -(*pp1)->getDiscount())  < ((*pp2)->getprice() - (*pp2)->getDiscount()))
    {
        Furniture* temp=*pp1;
        *pp1=*pp2;
        *pp2=temp;
    }
}

void sort_furniture_discount(Furniture** pp,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            order(pp+i,pp+j);
        }
    }
}
