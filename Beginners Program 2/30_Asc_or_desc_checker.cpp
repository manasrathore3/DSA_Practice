#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter Number :";
    cin>>a;
    cout<<"Enter Number :";
    cin>>b;
    cout<<"Enter Number:";
    cin>>c;
    
    if(a>b && b>c){
        cout<<"Descending order";
    }
    else if (a<b && b<c){
        cout<<"Ascending order";
    }else{
        cout<<"Neither Descending nor Ascending";
    }
    
    return 0;
}
