// 23. Electricity Bill Calculator
#include<iostream>
using namespace std;
int main(){
    int Totalunits;
    int rateperunit;
    int totalbillamount;


    cout<<"Enter a Totalunits:"<<endl;
    cin>>Totalunits;
    cout<<"Enter a rateperunit:"<<endl;
    cin>>rateperunit;


    totalbillamount=Totalunits*rateperunit;
    cout<<"Total bill amount is:"<<totalbillamount;
    return 0;
}