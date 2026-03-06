//  7. Simple Interest Calculator
#include<iostream>
using namespace std;
int main(){
    int P,R,T; 
    int Simple_intrest;    
    cout<<"Enter P :"<<endl;
    cin>>P;
    cout<<"Enter R :"<<endl;
    cin>>R;
    cout<<"Enter T :"<<endl;
    cin>>T;
    Simple_intrest=(P*R*T)/100;
    cout<<"Simple_intrest is :"<<Simple_intrest<<endl;
    return 0;
}