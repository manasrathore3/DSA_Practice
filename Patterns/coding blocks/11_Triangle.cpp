#include<iostream>
using namespace std;
int main(){
   

    int n,num;
    cout<<"Enter N :" ;
    cin>>n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout<<"   "; 
        }cout<<" * ";
        for(int j = 0 ; j < i ;j++){
            if (j%2==0){
                cout<<" ! ";
            }else{
                cout<<" * ";
            }
            
        } 
        if (i!=0){
            for (int j = 0; j < i; j++){
                if(i%2==0 && j%2==0){
                   cout<<" ! ";
                }else if (i%2!=0 && j%2!=0){
                   cout<<" ! ";
                }else{
                    cout<<" * ";
                }
            }
        }
        cout<<endl;
        
    }
           
    
    
    
    return 0;
}