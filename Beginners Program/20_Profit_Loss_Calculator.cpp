// 20.  Profit or Loss Calculator
#include<iostream>
using namespace std;
int main(){

    int costPrice;
    int sellPrice;
    int Profit;

    cout<<"Enter a costPrice:"<<endl;
    cin>>costPrice;
    cout<<"Enter a sellPrice:"<<endl;
    cin>>sellPrice;

    Profit=(sellPrice-costPrice)*100/costPrice;
    cout<<"Profit is:"<<Profit<<"%";

    return 0;
}