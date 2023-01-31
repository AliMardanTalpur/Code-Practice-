#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    
int w = 0;
int s = 0;
int a = 0;
int d = 0;
int trys = 10;
int keys;
int prize;
int E,W,N,S;


cout<<"******************************Welcome To The Collapsed World******************************";
cout<<endl<<"Your Have 10 Trys";
cout<<endl<<"Use W/S/A/D To Move : ";

do
{

if (w == 3)
{
prize = 1;
cout<<"\nYou Have Won A Prize"<<endl<<prize;
break;
}

else
{

keys = getch();

if (keys == 119)
{
    trys--;
    w++;
    cout<<"\nRemaning Truns = "<<trys<<"\nW = "<<w<<"\nS = "<<s<<"\nA = "<<a<<"\nD = "<<d;
}

else if (keys == 115)
{
    trys--;
    s++;
    cout<<"\nRemaning Truns = "<<trys<<"\nW = "<<w<<"\nS = "<<s<<"\nA = "<<a<<"\nD = "<<d;
}

else if (keys == 97)
{
    trys--;
    a++;
    cout<<"\nRemaning Truns = "<<trys<<"\nW = "<<w<<"\nS = "<<s<<"\nA = "<<a<<"\nD = "<<d;
}

else if (keys == 100)
{
    trys--;
    d++;
    cout<<"\nRemaning Truns = "<<trys<<"\nW = "<<w<<"\nS = "<<s<<"\nA = "<<a<<"\nD = "<<d;
}

}
}

while (w,s,a,d >= 0);

return 0;
}
