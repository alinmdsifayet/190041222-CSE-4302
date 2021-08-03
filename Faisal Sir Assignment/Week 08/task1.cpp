#include<bits/stdc++.h>
using namespace std;

class Seat
{
    private:
        string comfortability;
        string seatWarmer;
    public:
        void getSeatInfo()
        {
            cout<<"What is the comfortability of the seat?: ";
            cin>>comfortability;
            cout<<"Is there a seat warmer?: ";
            cin>>seatWarmer;
        }
        void putSeatInfo() const
        {
            cout<<"Comfortability of seat: "<<comfortability<<endl;
            cout<<"Presence of seat warmer: "<<seatWarmer<<endl;
        }
};

class Wheel
{
    private:
        double radius;
    public:
        void getWheelInfo()
        {
            cout<<"What is the radius: ";
            cin>>radius;
        }
        void putWheelInfo()
        {
            cout<<"Radius: "<<radius<<endl;
        }

};

class Engine
{
    private:
        int maxFuelConsumptionRate;
        int maxEnergyProductionRate;
        double rpm;
    public:
        void getEngineInfo()
        {
            cout<<"What is max Fuel Consumption Rate? ";
            cin>> maxFuelConsumptionRate;
            cout<<"What is max Energy Production Rate? ";
            cin>> maxEnergyProductionRate;
            cout<<"What is avg RPM? ";
            cin>>rpm;
        }
        void putEngineInfo()
        {
            cout<<"Max Fuel Consumption Rate: "<<maxFuelConsumptionRate<<endl;
            cout<<"Max Energy Production Rate: "<<maxEnergyProductionRate<<endl;
            cout<<"Avg RPM: "<<rpm<<endl;
        }
};

class Door
{
    private:
        string openingMode;
    public:
        void getDoorInfo()
        {
            cout<<"What is the opening mode of the door?: ";
            cin>>openingMode;
        }
        void putDoorInfo()
        {
            cout<<"Opening mode of door: "<<openingMode<<endl;
        }
};

class Truck
{
private:
    Seat s[2];
    Wheel w[6];
    Engine e;
    Door d[4];
public:
    void getTruckInfo()
    {
        int i;
        for(i=0;i<2;i++)
        {
            cout<<"For seat "<<i<<": "<<endl;
            s[i].getSeatInfo();
        }
        for(i=0;i<6;i++)
        {
            cout<<"For wheel "<<i<<": "<<endl;
            w[i].getWheelInfo();
        }
        cout<<"For engine: "<<endl;
        e.getEngineInfo();
        for(i=0;i<4;i++)
        {
            cout<<"For door "<<i<<": "<<endl;
            d[i].getDoorInfo();
        }
    }
    void putTruckInfo()
    {
        int i;
        for(i=0;i<2;i++)
        {
            cout<<"For seat "<<i<<": "<<endl;
            s[i].putSeatInfo();
        }
        for(i=0;i<6;i++)
        {
            cout<<"For wheel "<<i<<": "<<endl;
            w[i].putWheelInfo();
        }
        cout<<"For engine: "<<endl;
        e.putEngineInfo();
        for(i=0;i<4;i++)
        {
            cout<<"For door "<<i<<": "<<endl;
            d[i].putDoorInfo();
        }
    }
};

int main()
{
    Truck t1,t2;
    t1.getTruckInfo();
    t1.putTruckInfo();
    return 0;
}









