#include<iostream>
#include<conio.h>

using namespace std;

int main(){

//1 , 2
int pin;
char name[50];
string Phone_No;
char Address[50];
string profile1;
string accountno = "1234 4567 8912 3456";
string cnic;
char father_name[50];
//---------------------------------------
//3
string withdrawam;
long amount;
//---------------------------------------
//4
long balance = 10000;
string deposite;
int selection_no;
//5
//int i;
//---------------------------------------

//Pre made profile
profile1 = "Account No : 1234_4567_8912_3456\nName : Mubashir Kumar \nPhone No : 03112255448 \nAddress : Allah jana";

//---------------------------------------//---------------------------------------//---------------------------------------

system("CLS");

cout<<"\t\t\t\t\t\t ---------------Bank Menu---------------"<<endl;

cout<<"1. Chack Profile"<<endl;
cout<<"2. Creat A Account"<<endl;
cout<<"3. Withdraw Cash"<<endl;
cout<<"4. Chack Your Balance"<<endl;
cout<<"5. Exit"<<endl<<endl<<endl;

//---------------------------------------//---------------------------------------//---------------------------------------

cout<<"Type In Any No From 1 to 5 : " ;
cin>>selection_no;

//---------------------------------------//---------------------------------------//---------------------------------------

//profile Chacking 1

//profile Chacking option can only show a pre-made profile

if (selection_no == 1)
{
    system("CLS");
    cout<<"Type In Your Account Pin : ";
    cin>>pin;


    if (pin == 9999)
    {
        cout<<profile1;
    }
    else
    {
        cout<<"Invalid Pin Code"<<endl;
        cout<<"Press Enter to Try Again / Press Esc to Exit"<<endl;
        //if(getch())
        if(getch() == 13)
        {
        cout<<"Type In Your Account Pin : ";
        cin>>pin;
        if (pin == 9999)
        {
            cout<<profile1;
        }
        }
        if(pin != 9999)
        {
            cout<<"------------------Exiting------------------";
        }
        else if(getch() == 27)
        {
            cout<<"------------------Exiting------------------";
        }

    } 

}
//---------------------------------------//---------------------------------------//---------------------------------------
//Account Creating

else if(selection_no == 2)
{
    system("CLS");

    cout<<"Type in Your Name : ";
    cin.ignore();
    cin.getline(name,50);

    cout<<"Type in Your Father Name : ";
    cin.ignore();
    cin.getline(father_name,50); 

    cout<<"Write In Your Phone No : ";
    cin>>Phone_No;

    cout<<"Type in Your CNIC : ";
    cin>>cnic;

    cout<<"Write In Your Address : ";
    cin.ignore();
    cin.getline(Address,50);



    system("CLS");
    cout<<"----------------------Details----------------------"<<endl<<endl;
    cout<<"Your Account Pin  Is : "<<pin<<endl
    <<"Your Account Name Is : "<<name<<endl
    <<"Your Father Name Is : "<<father_name<<endl
    <<"Your Phone No Is : "<<Phone_No<<endl
    <<"Your CNIC Is : "<<cnic<<endl
    <<"Your Address Is : "<<Address<<endl;
}
//---------------------------------------//---------------------------------------//---------------------------------------
//Withdraw Cash

else if(selection_no == 3)

{

system("CLS");
    cout<<"Type In Your Account Pin : ";
    cin>>pin;


    if (pin == 9999)
    {
        cout<<"Your Current Balance Is : "<<balance<<endl<<endl;
        cout<<"Type in the Amount which you Want to withdraw : ";
        cin>>amount;
        if (amount <= balance)
        {
            cout<<balance - amount;
            balance = balance;
        }
    
    }
    else
    {
        cout<<"Invalid Pin Code"<<endl;
        cout<<"Press Enter to Try Again / Press Esc to Exit"<<endl;
        //if(getch())
        if(getch() == 13)
        {
        cout<<"Type In Your Account Pin : ";
        cin>>pin;

        if (pin == 9999)
        {
        cout<<"Your Current Balance Is : "<<balance<<endl<<endl;
        cout<<"Type in the Amount which you Want to withdraw : ";
        cin>>amount;
            if (amount <= balance)
                {
                    cout<<"Your Remaning Balance Is : "<<balance - amount;
                    balance = balance;
                }
            ///////////////////////////////////////////////////////////////////////////////////////////
            else //if(amount < balance)
            {
                    cout<<"your given amount is too big";    // fix this
            }
            ///////////////////////////////////////////////////////////////////////////////////////////////
            }
        }
            if(pin != 9999)
            {
                cout<<"------------------Exiting------------------";
            }
        else if(getch() == 27)
        {
            cout<<"------------------Exiting------------------";
        }

    } 

}

//---------------------------------------//---------------------------------------//---------------------------------------
//Balance Chack


else if(selection_no == 4)

{

system("CLS");
    cout<<"Type In Your Account Pin : ";
    cin>>pin;


    if (pin == 9999)
    {
        cout<<"Your Current Balance Is : "<<balance<<endl<<endl;
    }
    else
    {
        cout<<"Invalid Pin Code"<<endl;
        cout<<"Press Enter to Try Again / Press Esc to Exit"<<endl;
        //if(getch())
        if(getch() == 13)
        {
        cout<<"Type In Your Account Pin : ";
        cin>>pin;

        if (pin == 9999)
        {
        cout<<"Your Current Balance Is : "<<balance<<endl<<endl;
        }
        }
        }
        if(pin != 9999)
        {
            cout<<"------------------Exiting------------------";
        }
        else if(getch() == 27)
        {
            cout<<"------------------Exiting------------------";
        }

    } 

//---------------------------------------//---------------------------------------//---------------------------------------
//Exit 

//cin>>i;

 if(selection_no == 5)
{
cout<<"Closing window";
exit(5);
}


return 0;
}
