//  16. Days to Years, Weeks, Days Converter
#include<iostream>
using namespace std;
int main(){
    int Seconds;
    int Hours,Hour;
    int Minutes,Minute;
    cout<<"Enter Seconds:"<<endl;
    cin>>Seconds;
    Hours=Seconds/3600; 
    Minutes=Seconds/360; 
    // Minutes=Hours/360;
    // Weeks=Year/7;
    // Days=Weeks%7;
    cout<<"Hours are:"<<Hours<<endl;
    cout<<"Hour are:"<<Hour<<endl;
    // cout<<"Weeks are:"<<Weeks<<endl;
    // cout<<"Days are:"<<Days<<endl;
    return 0;
}
