#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter Number :";
    cin>>x;
     
    if(x%2==0){
        cout<<"Divisibile by 2\n";
    }
    if(x%3==0){
        cout<<"Divisibile by 3\n";
    }
    if(x%5==0){
        cout<<"Divisibile by 5\n";
    }
    if(x%2!=0 && x%3!=0 && x%5!=0  ){
        cout<<"Divisibile by None\n";
    }
    
    return 0;
}
