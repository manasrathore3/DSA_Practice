#include<iostream>
using namespace std;
int main(){

    int n,j;
    cout<<"Enter N : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++){
       for (j = 0; j <=n-i; j++){
           cout<<" * "; 
       }
       cout<<endl;
    }
 

    return 0;
}

