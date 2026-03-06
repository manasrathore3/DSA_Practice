#include<iostream>
using namespace std;
int main (){
    int n=5;
    // cout<<"Enter n:"<<endl;
    // cin>>n;
    int i;
    for (int i=1;i<=n;i++){
        if (n%i==0 && n%n==0) 
        {
            cout<<"No prime";
        }
        
    }
    
    

    return 0;
} 