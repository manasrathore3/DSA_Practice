#include<iostream>
using namespace std;
int main(){
   
    int n,num;
    cout<<"Enter N :" ;
    cin>>n;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n-i; j++){
           cout<<"  ";
        }
        for (int j = 0; j < i+1; j++){
           cout<<j+1;
        }
        cout<<endl;
    }

   return 0;
}   