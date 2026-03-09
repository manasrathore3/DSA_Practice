#include<iostream>
using namespace std;
int main(){
    
    int num,n;
    cout<<"Enter n :";
    cin>>n;
    
    for (int i = 0; i < n ; i++){
        for (int j = 0 ; j < (n-i-1) ; j++){
            cout<<"  ";
        }cout<<"* ";
        if (i!=0){
            for(int j = 0 ; j < (2*i-1) ; j++){
                cout<<"  ";
            }cout<<"* ";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n-1 ; i++){
        //space  i+1
        for (int j = 0 ; j < i+1 ; j++){
            cout<<"  ";
        }
        cout<<"* ";   
        //space  i n-i-1
        if (i!=(n-2)){
            for (int j = 0 ; j < 2*(n-i) -5 ; j++){             //According to shraddha 2*(n-i) -5/(3 As per me but not correct)
                cout<<"  ";
        }
        cout<<"* "; 
        cout<<endl; 
        }
        
        
        
    }
    
    
    
    return 0;
}
