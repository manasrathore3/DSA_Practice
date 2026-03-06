#include<iostream>
using namespace std;
int main(){
    
    int i,j,n;
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++){
        for (j = 1; j <= n-i; j++){
            cout<<"   ";
        }
        for (j=(n-i); j<n; j++){
                cout<<" * ";
        }
        cout<<endl;
    }
    return 0;  
}