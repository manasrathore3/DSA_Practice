// 22. Total Cost Calculator with Tax
#include<iostream>
using namespace std;
int main(){
    int price;
    int quantity;
    int taxpercentage;
    int taxamount;
    int Total_Amount;
    int Subtotal;


    cout<<"Enter a inputprice:"<<endl;
    cin>>price;
    cout<<"Enter a quantity:"<<endl;
    cin>>quantity;
    cout<<"Enter a taxpercentage:"<<endl;
    cin>>taxpercentage;

    taxamount=(price*quantity*taxpercentage)/100;
    Subtotal=price*quantity;
    Total_Amount=Subtotal+taxamount;
    
    cout<<"Subtotal is:"<<Subtotal<<endl;
    cout<<"Tax amount is:"<<taxamount<<endl;
    cout<<"Total amount is:"<<Total_Amount<<endl;
    return 0;
}