#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter Body weight:";
    cin>>x;

    if (x<18.5){
        cout<<"Underweight";
    }else if (x>=18.5 && x<=24.9){
        cout<<"Normal";
    }else if (x>=25 && x<=24.9){
        cout<<"Overweight";
    }else if(x>=30){
        cout<<"Obese";
    }else{
        cout<<"Enter valid weight";
    }
    
    return 0;
}
