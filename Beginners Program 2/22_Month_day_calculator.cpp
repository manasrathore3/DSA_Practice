#include<iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"Enter Month :";
    cin>>x;
    cout<<"Enter Year :";
    cin>>y;
     
    if(y%4==0 && x==2){
        cout<<"Total number of days 29";
    }else if(x==1){
        cout<<"Total number of days 31";
    }else if (x==2){
        cout<<"Total number of days 28";
    }else if (x==3){
        cout<<"Total number of days 31";
    }else if(x==4){
        cout<<"Total number of days 30";
    }else if(x==5){
        cout<<"Total number of days 31";
    }else if(x==6){
        cout<<"Total number of days 30";
    }else if(x==7){
        cout<<"Total number of days 31";
    }else if(x==8){
        cout<<"Total number of days 31";
    }else if(x==9){
        cout<<"Total number of days 30";
    }else if(x==10){
        cout<<"Total number of days 31";
    }else if(x==11){
        cout<<"Total number of days 30";
    }else if(x==12){
        cout<<"Total number of days 31";
    }else{
        cout<<"Invalid";
    }
    
    return 0;
}
