#include<iostream>
using namespace std;
int main (){
    char x;
    cout<<"Enter Character :";
    cin>>x;
     
    if(x>='A' && x<='M'){
        cout<<"First Half";
    }else if(x>='N' && x<='Z'){
        cout<<"Second Half";
    }else{
        cout<<"Invalid";
    }
    
    return 0;
}
