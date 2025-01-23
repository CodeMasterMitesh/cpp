#include<iostream>
using namespace std;

class Travel
{
    string Name;
    int Person;
    string Way;
    string Destination;
    string Choice;
    int Price;
    string PaymentMode;
    int TotalPayment;

    public:
    Travel()
    {
        cout<<"------------------Darshan Tours & Travels---------------------"<<endl;
        cout<<"-------------------Domestic Tours-----------------------------"<<endl; 
        cout<<"1.Uttrakhand"<<endl;
        cout<<"2.Andman Nikobar"<<endl;
        cout<<"3.Himachal Pardesh"<<endl;
        cout<<"4.Kerala"<<endl;
        cout<<"5.Rajeshthan"<<endl;
        cout<<"--------------------------------------------------------------"<<endl;

        cout<<"--------------------International-----------------------------"<<endl;
        cout<<"1.Nepal"<<endl;
        cout<<"2.Dubai"<<endl;
        cout<<"3.Thailand"<<endl;
        cout<<"4.Singapore"<<endl;
        cout<<"5.Australia"<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
    

        cout<<"Enter Your Name:"<<endl;
        cin>>Name;
        cout<<"Choose Your Way(Domestic/International):"<<endl;
        cin>>Way;
        cout<<"Enter Your Destination:"<<endl;
        cin>>Destination;

        //This Condition For Domestic Tours

        if(Way == "Domestic" || Way == "International")
        {
            if(Destination == "Uttrakhand" || Destination =="Uttrakhand")
            {
                cout<<"Packages For Uttrakhand:"<<endl;
                cout<<"1. 7Days-6Nights: Price = 35000"<<endl;
                cout<<"2. 5Days-4Nights: Price = 27000"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "7Days-6Nights")
                {
                    Price = 35000;
                }
                else if(Choice == "5Days-4Nights")
                {
                    Price  = 27000;
                }
            }

            else if(Destination =="Adman Nikobar" || Destination =="Adman Nikobar")
            {
                cout<<"Packages For Adman Nikobar Choose Package:"<<endl;
                cout<<"1. 6Days-5Nights : Price = 30000"<<endl;
                cout<<"2. 5Days-4Nights : Price = 22000"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "6Days-5Nights")
                {
                    Price = 30000;
                }
                else if(Choice == "5Days-4Nights")
                {
                    Price = 22000;
                }
            }

           
           else if(Destination =="Himachal Pardesh"|| Destination =="himachal pardesh")
           {
                cout<<"Packages For Himachal Pardesh Choose Package:"<<endl;
                cout<<"1. 8Days-7Nights: Price=40000"<<endl;
                cout<<"2. 5Days-6Nights: Price=27000"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "8Days-7Nights")
                {
                    Price = 40000;
                }
                else if(Choice == "5Days-6Nights")
                {
                    Price = 27000;
                }
           }

           else if(Destination =="Kerala" || Destination =="kerala")
           {
                cout<<"Packages For Kerala:"<<endl;
                cout<<"7Days-6Nights: Price=32500"<<endl;
                cout<<"5Days-4Nights: Price=28500"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice =="7Days-6Nights")
                {
                    Price = 32500;
                }
                else if(Choice =="5Days-4Nights")
                {
                    Price = 28500;
                }
           }

           else if(Destination == "Rajeshthan" || Destination =="rajeshthan")
           {
                cout<<"Packages For Rajeshthan:"<<endl;
                cout<<"6Days-5Nights: 22500"<<endl;
                cout<<"5Days-4Nights: 17500"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "6Days-5Nights")
                {
                    Price = 22500;
                }

                else if(Choice =="5Days-4Nights")
                {
                    Price = 17500;
                }
           }

            //This Conditions For International Package

            else if(Destination =="Nepal" || Destination =="nepal")
            {
                cout<<"Packages For Nepal:"<<endl;
                cout<<"7Days-6Nights: Price = 30000"<<endl;
                cout<<"5Days-4Nights: Price = 25000"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "7Days-6Nights")
                {
                    Price = 30000;
                }
                else if(Choice == "5Days-4Nights")
                {
                    Price = 25000;
                }
            }

            else if(Destination =="Dubai" || Destination=="dubai")
            {
                cout<<"Packages For Dubai:"<<endl;
                cout<<"8Days-7Nights: Price = 55000"<<endl;
                cout<<"6Days-5Nights: Price = 45000"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "8Days-7Nights")
                {
                    Price = 55000;
                }
                else if(Choice == "6Days-5Nights")
                {
                    Price = 45000;
                }
            }

            else if(Destination =="Thailand" || Destination=="thailand")
            {
                cout<<"Packages For Thailand:"<<endl;
                cout<<"7Days-6Nights: Price = 27500"<<endl;
                cout<<"5Days-4Nights: Price = 19500"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "7Days-6Nights")
                {
                    Price = 27500;
                }
                else if(Choice == "5Days-4Nights")
                {
                    Price = 19500;
                }
            }

            else if(Destination =="Singapore" || Destination=="singapore")
            {
                cout<<"Packages For Singapore:"<<endl;
                cout<<"7Days-6Nights: Price = 59500"<<endl;
                cout<<"5Days-4Nights: Price = 52500"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "7Days-6Nights")
                {
                    Price = 59500;
                }
                else if(Choice == "5Days-4Nights")
                {
                    Price = 52500;
                }
            }

            else if(Destination =="Australia" || Destination=="australia")
            {
                cout<<"Packages For Australia:"<<endl;
                cout<<"7Days-6Nights: Price = 450000"<<endl;
                cout<<"5Days-4Nights: Price = 320000"<<endl;

                cout<<"Enter Choice:";
                cin>>Choice;
                if(Choice == "7Days-6Nights")
                {
                    Price = 450000;
                }
                else if(Choice == "5Days-4Nights")
                {
                    Price = 320000;
                }
            }
        }
        else
        {
            cout<<"Please Choose Available Packages!..."<<endl;
        }

        //optional For Paymnet Mode
        cout<<"Enter The Persons:";
        cin>>Person;
        cout<<"Paymnet Option:"<<endl;
        cout<<"One Time Payment"<<endl;
        cout<<"EMI"<<endl;
        cout<<"Enter Payment Mode(OTP/EMI):";
        cin>>PaymentMode;

        int Amount;
        if(PaymentMode == "OTP")
        {
            int discount = (Person*(Price*10)/100);
            Amount =Person * Price-discount;
            cout<<"Your Final Amount is Rs:"<<Amount<<endl;
            cout<<"Plase Pay And Confirm Your Booking:";
            cin>>TotalPayment;
        }
        else if(PaymentMode == "EMI")
        {
            int EMI;
            cout<<"Our EMI Palns(In Months):"<<endl;
            cout<<"1).3 Months"<<endl;
            cout<<"2).6 Months"<<endl;
            cout<<"3).9 Months"<<endl;
            cout<<"4).12 Months"<<endl;

            cout<<"Select Your EMI Palns(1,2,3,4):";
            cin>>EMI;
            cout<<"Selected EMI Palns:"<<EMI<<endl;

            int EMIAmount;
            switch(EMI)
            {
                case 1:
                EMIAmount =(Person * Price)/3;
                break;

                case 2:
                EMIAmount =(Person *Price)/6;
                break;

                case 3:
                EMIAmount =(Person *Price)/9;
                break;

                case 4:
                EMIAmount = (Person * Price)/12;
                break;
            }
            cout<<endl;

            cout<<"Your EMI AMount is Rs:"<<EMIAmount<<"For"<<EMI*3<<"Months"<<endl;
            cout<<"Enter Total Payment & Confirm Your Booking:";
            cin>>TotalPayment;
        }
        cout<<"----------------------Thank you for Visiting Our Site--------------------"<<endl;
    }

        ~Travel()
        {
            cout<<"-----------------------Booking Details--------------------------"<<endl;
            cout<<"Name:"<<Name<<endl;
            // cout<<"Date:"<<_DATE_<<endl;
            cout<<"Your Way:"<<Way<<endl;
            cout<<"Destination:"<<Destination<<endl;
            cout<<"Payment Mode:"<<PaymentMode<<endl;
            cout<<"Total Payment:"<<Person*Price<<endl;
            cout<<"Happy & Safe Journey!"<<endl;
            cout<<"-----------------------------------------------------------------"<<endl;
        }
};

int main()
{
    system("cls");
    Travel T1;
    return 0;
}