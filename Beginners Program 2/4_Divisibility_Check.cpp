#include<iostream>
using namespace std;
int main (){
    int dividend;
    int divisor;
    cout<<"Enter dividend:\n";
    cin>>dividend;
    cout<<"Enter divisor:\n";
    cin>>divisor;
    if(dividend%divisor==0){
        cout<<"Number is Divisible";
    }
    else{
        cout<<"Number is Not Divisible\n";
    }
    return 0;
}
