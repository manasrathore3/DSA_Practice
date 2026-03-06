// 9. Fahrenheit to Celsius Converter
#include<iostream>
using namespace std;
int main(){
    int Celsius;
    int Fahrenheit;
    cout<<"Enter Temperature in Fahrenheit :"<<endl;
    cin>>Fahrenheit;
    Celsius=(Fahrenheit-32)*5/9;
    cout<<"Temperature in Celsius:"<<Celsius;
}