#include<iostream>
using namespace std;
int main (){
    int x,r1,r2,r3;
    cout<<"Enter Units :";
    cin>>x;
              ///correct it by using - operator and simple 
            //   conditions also remove faltu variables
    if(x>=0 && x<=100){
        cout<<x*5;
    }else if(x>=101 && x<=200){
        r1=(x%100);
        cout<<r1*7+100*5;
    }else if(x>=201 && x<=300){
        r2=(x%200);
        cout<<r2*10+100*7+100*5;
    }else if(x>300){
        r3=(x%300);
        cout<<r3*15+100*10+100*7+100*5;
    }else{
        cout<<"Wrong input";
    }
    
    
    
    return 0;
}
