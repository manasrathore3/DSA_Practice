// 4. Program to find average and sum of three numbers 
#include<iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    int number3;
    int sum;
    float Average;
    cout<<"Enter a number1:"<<endl;
    cin>>number1;
    cout<<"Enter a number2:"<<endl;
    cin>>number2;
    cout<<"Enter a number3:"<<endl;
    cin>>number3;
    sum=number1+number2+number3;
    Average=(number1+number2+number3)/3;
    cout<<"Sum is:"<<sum<<endl;
    cout<<"Average is:"<<Average<<endl;
    return 0;
}