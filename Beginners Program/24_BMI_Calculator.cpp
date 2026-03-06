// 24. BMI Body Mass Index Calculator
#include<iostream>
using namespace std;
int main(){
    int weight;
    int height;
    int BMI;

    cout<<"Enter weight in kilograms:"<<endl;
    cin>>weight;
    cout<<"Enter height in meter:"<<endl;
    cin>>height;
    
    BMI = weight/height*height;
    cout<<"Body Mass Index is:"<<BMI;
    return 0;
}