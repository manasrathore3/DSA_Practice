#include<iostream>
using namespace std;
int main (){
    int Number;
    cout<<"Enter Marks :";
    cin>>Number;

    if(Number>=90 && Number<=100){
        cout<<"Your Grade is A ";
    }else if (Number>=80 && Number<=89){
        cout<<"Your Grade is B ";
    }else if (Number>=70 && Number<=79){
        cout<<"Your Grade is C ";
    }else if (Number>=60 && Number<=69){
        cout<<"Your Grade is D ";
    }else if (Number>=40 && Number<=59){
        cout<<"Your Grade is E ";
    }else{
        cout<<"Your Grade is F ";
    }
    
    
    
    return 0;
}