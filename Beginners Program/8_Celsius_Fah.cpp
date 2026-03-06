// 8. Celsius to Fahrenheit Converter
#include<iostream>
using namespace std;
int main(){
    int Celsius;
    int Fahrenheit;
    cout<<"Enter Temperature in Celsius :"<<endl;
    cin>>Celsius;
    Fahrenheit=(Celsius*9/5)+32;
    cout<<"Temperature in Fahrenheit:"<<Fahrenheit;
    return 0;
}