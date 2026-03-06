// 14. Swap Two Numbers Without Third Variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
    return 0;
}