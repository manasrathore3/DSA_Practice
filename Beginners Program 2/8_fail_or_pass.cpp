#include<iostream>
using namespace std;
int main (){
    int marks;
    cout<<"Enter student's marks :";
    cin>>marks;

    if (marks>=40 && marks<=100){
        cout<<"Pass";
    }else if (marks>100){
        cout<<"Entered number is Not Acceptable";
    }else{
        cout<<"Fail";
    }
    
    return 0;
}