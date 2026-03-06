// 3. Program to calculate sum,difference,multiplication,modulus,division
#include<iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    int sum,diff,mul,modulus;
    double div;
    cout<<"Enter a number1:"<<endl;
    cin>>number1;
    cout<<"Enter a number2:"<<endl;
    cin>>number2;
    sum=number1+number2;
    diff=number1-number2;
    mul=number1*number2;
    div=number1/number2;
    modulus=number1%number2;
    cout<<"Sum is:"<<sum<<endl;
    cout<<"Difference is:"<<diff<<endl;
    cout<<"Multiplication is:"<<mul<<endl;
    cout<<"Divison is:"<<div<<endl;
    cout<<"Modulus is:"<<modulus<<endl;
    return 0;
}