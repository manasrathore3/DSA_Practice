// 21. Discount Price Calculator
#include<iostream>
using namespace std;
int main(){

    int actualprice;
    int discount;
    int amount;

    cout<<"Enter Actualprice:"<<endl;
    cin>>actualprice;
    cout<<"Enter Discount percentage:"<<endl;
    cin>>discount;

    amount=(actualprice*discount)/100;
    actualprice=actualprice-amount;
    cout<<"Discounted Amount is:"<<actualprice;

    return 0;
}