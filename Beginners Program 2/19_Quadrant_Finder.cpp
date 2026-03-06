#include<iostream>
using namespace std;
int main (){
    int X;
    int Y;
    cout<<"Enter X:";
    cin>>X;
    cout<<"Enter Y:";
    cin>>Y;

    if (X==0 && Y==0){
        cout<<"Origin pe hai";
    }else if(X>0 && Y>0){
        cout<<"First Quadrant";
    }else if(X<0 && Y>0 ){
        cout<<"Second Quadrant";
    }else if(X<0 && Y<0){
        cout<<"Third Quadrant";
    }else if(X>0 && Y<0){
        cout<<"Fourth Quadrant";
    }else if(X==0 ){
        cout<<"Y Axis"; 
    }else if(Y==0){
        cout<<"X Axis"; 
    } else{
        cout<<"Invalid Axis cordinates"; 
    }
    
    return 0;
}