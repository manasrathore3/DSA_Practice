#include<iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"Enter Day :";
    cin>>x;
    cout<<"Enter Month :";
    cin>>y;

    if ((x>=1 && x<=31) && (y==1 || y==3 ||y==5 ||y==7 ||y==8 ||y==10 ||y==12)){
        cout<<"Valid date";
    }else if((x>=1 && x<=30) && (y==4 || y==6 ||y==9 ||y==11)){
        cout<<"Valid date";
    }else if(x>=1 && x<=29 && y==2){
        cout<<"Valid date";
    }else{
        cout<<"Invalid date";
    }
    
    
    return 0;
}
