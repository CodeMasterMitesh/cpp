#include<iostream>
using namespace std;

class Travels
{
    int Person;
    int Total;
    int Payment;
    int Price;
    string Name;
    string Destination;
    string Mode;
    int OTPDiscount = 8000;
    int EmiDiscount = 4000;

    public:
    Travels()
    {
        cout<<"----------------------------Darshan Tours & Travels----------------------"<<endl;
        cout<<"------------------------------Tours Packages-----------------------------"<<endl;
        cout<<"Package                             Days                            price"<<endl;
        cout<<"1.Kerala                           5 Nights/6 Days                  37000"<<endl;
        cout<<"2.Andaman Nikobar                  6 Nights/7 Days                  45000"<<endl;
        cout<<"3.Kashmir(jammu-shrinager)         4 Nights/5 Days                  22000"<<endl;
        cout<<"4.Rajeshthan                       5 Nights/6 Days                  18000"<<endl;
        cout<<"5.Simla-Kulu-Manali                7 Nights/8 Days                  42000"<<endl;
        cout<<"-------------------------------------------------------------------------"<<endl;


        cout<<"----------------------------------"<<endl;
        cout<<"Enter Your Name:";
        cin>>Name;
        cout<<"Enter Your Destination:";
        cin>>Destination;
        cout<<"How Many Person:";
        cin>>Person;
        if(Destination=="Kerala")
        {
            Price = 37000;
        }
        else if(Destination=="Andaman")
        {
            Price = 45000; 
        }
        else if(Destination=="Kashmir")
        {
            Price = 22000;
        }
        else if(Destination=="Rajeshthan")
        {
            Price = 18000;
        }
        else if(Destination=="Simla-Kulu-Manali")
        {
            Price = 42000;
        }
        else
        {
            cout<<"Enter Valid Destination Place According To Package:"<<endl;
        }
        
        Price = Price * Person;
        cout<<"Price :"<<Price<<endl;


        cout<<"If You Choose One Sort Payment You Get Discount & You Choose EMI You Get Discount 4000:";
        cout<<"Enter Your Payment Mode(OTP/EMI):";
        cin>>Mode;
        if(Mode=="OTP")
        {
            Total = Price - OTPDiscount;
            cout<<"Final Payment Is :"<<Total<<endl;
        }
        else if(Mode=="EMI")
        {
            Total = Price - EmiDiscount;
            cout<<"Final Payment Is :"<<Total<<endl;
        }
        else
        {
            cout<<"Invalid Payment Mode!:"<<endl;
        }

        cout<<"Enter Payment & Confirm Your Booking:";
        cin>>Payment;
        if(Payment==Total)
        {
            cout<<"Payment Done Successfully:"<<endl;
        }
        else
        {
            cout<<"Payment Failed!:"<<endl;
        }
        cout<<"Your Booking is Confirm:"<<endl;
        cout<<"------------------------------------"<<endl;
    }
    ~Travels()
    {
        cout<<"------------------Check Ypur Booking Details--------------------"<<endl;
        // cout<<"Date:"<<_DATE_<<endl;
        cout<<"Your Name is:"<<Name<<endl;
        cout<<"Your Destination is:"<<Destination<<endl;
        cout<<"Destination Price:"<<Price<<endl;
        cout<<"Payment Mode:"<<Mode<<endl;
        cout<<"Total Price:"<<Total<<endl;
        cout<<"Happy & Safe Journey!"<<endl;
        cout<<"---------------------------------------------------------------------";
    }
};
int main()
{
    system("cls");
    Travels T1;
    return 0;
}