//  16. Days to Years, Weeks, Days Converter
#include<iostream>
using namespace std;
int main(){
    int Days;
    int Years,Year;
    int Weeks,Week;
    cout<<"Enter Days:"<<endl;
    cin>>Days;
    Years=Days/365; 
    Year=Days%365;
    Weeks=Year/7;
    Days=Weeks%7;
    cout<<"Years are:"<<Years<<endl;
    cout<<"Weeks are:"<<Weeks<<endl;
    cout<<"Days are:"<<Days<<endl;
    return 0;
}