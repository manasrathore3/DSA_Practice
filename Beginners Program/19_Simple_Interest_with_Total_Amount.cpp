// 19. Simple Interest with Total Amount
#include<iostream>
using namespace std;
int main(){
    int P,R,T; 
    int Simple_intrest;  
    int Amount_total;  
    cout<<"Enter Principle Amount :"<<endl;
    cin>>P;
    cout<<"Enter Rate of Interest :"<<endl;
    cin>>R;
    cout<<"Enter Time Period :"<<endl;
    cin>>T;
    Simple_intrest=(P*R*T)/100;
    Amount_total=Simple_intrest+P;
    cout<<"Simple intrest is :"<<Simple_intrest<<endl;
    cout<<"Total Amount is :"<<Amount_total<<endl;
    return 0;
}