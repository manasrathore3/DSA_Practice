#include<iostream>
using namespace std;
int main(){
   

    int n,mid;
    cout<<"Enter N :" ;
    cin>>n;
    mid=(n+1)/2;

    for (int i = 0; i < mid; i++){
        for (int j = 0; j < mid-1-i; j++){
            cout<<"* ";
        }
        for (int j = 0; j < 2*i+1; j++){
            cout<<"  ";
        }
        for (int j = (mid-1-i); j > 0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 0; i < mid-1; i++){
        for (int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        for (int j = 0; j < 2*mid-3-2*i; j++){
            cout<<"  ";
        }
        for (int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    
    return 0;
}
