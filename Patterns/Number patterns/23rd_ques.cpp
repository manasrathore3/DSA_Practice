#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int n,num;
    cout<<"Enter N : ";
    cin>>n;

    for (int i = 0; i < n; i++){                      //23
        for (int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        for (int j = 0; j < 2*i+1; j++){
            cout<<"1 ";
        }
        cout<<endl;
    }
      

     
    return 0;
}