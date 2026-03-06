#include<iostream>
using namespace std;
int main (){
    int a , b;
    cout<<"Enter first number a:";
    cin>>a;
    cout<<"Enter second number b:";
    cin>>b;

    if (a>b){
       cout<< a <<" is Greater then "<< b;
    }
    else if (a==b){
      cout<< a <<" and "<< b <<" are equal ";
    }
    else{
      cout<< a <<" is Smaller then "<< b; 
    }
    return 0;
} 