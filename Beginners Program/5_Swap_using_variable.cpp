// 5. Swap Two Numbers Using Third Variable
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    c=a+b;
    b=c-b;
    a=c-a;
    cout<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
     
    return 0;
}