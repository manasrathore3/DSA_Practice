#include<iostream>
using namespace std;
int main (){
    char c;
    cout<<"Enter character:";
    cin>>c;

    if (c>='a' && c<='z'){
        cout<<"Entered number is Lowercase";
    }
    else if(c>='A' && c<='Z'){
        cout<<"Entered number is Uppercase";
    }
    else{
        cout<<"Entered number is Unacceptable";
    }
      
    return 0;
}