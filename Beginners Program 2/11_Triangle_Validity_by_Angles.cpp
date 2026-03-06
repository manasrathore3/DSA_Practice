#include<iostream>
using namespace std;
int main (){
    int angle_1;
    int angle_2;
    int angle_3;
    cout<<"Enter angle_1 :";
    cin>>angle_1;
    cout<<"Enter angle_2 :";
    cin>>angle_2;
    cout<<"Enter angle_3 :";
    cin>>angle_3;

    if (angle_1+angle_2+angle_3==180){
        cout<<"Valid Triangle";
    }else{
        cout<<"Invalid Triangle";
    }
    
    return 0;
}