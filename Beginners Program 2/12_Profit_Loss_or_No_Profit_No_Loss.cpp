#include<iostream>
using namespace std;
int main (){
    int profit;
    int loss;
    int cost_price;
    int sell_price;
    cout<<"Enter Cost price :";
    cin>>cost_price;
    cout<<"Enter Sell price :";
    cin>>sell_price;

    profit=sell_price-cost_price;
    loss=sell_price-cost_price;

    if (cost_price<sell_price){
        cout<<"Profit "<<profit;
    }else if (cost_price==sell_price){
        cout<<"No Loss No profit ";
    }else{
        cout<<"Loss"<<loss;
    }
    
    return 0;
}