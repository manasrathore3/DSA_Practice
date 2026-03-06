#include<iostream>
using namespace std;
int main (){
    char c;
    cout<<"Enter any character:";
    cin>>c;

    if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
        cout<<"Entered number is a Alphabet";
    }else if(c>=48 && c<=57){
        cout<<"Entered number is a Digit";
    }else if(c>=33 && c<=64) {
        cout<<"Entered number is a Special Character";
    }else{
        cout<<"Entered number is Not Acceptable";
    }
    
    return 0;
}