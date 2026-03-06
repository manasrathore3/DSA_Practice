// 6: Percentage Calculator
#include<iostream>
using namespace std;
int main(){
    int subject1 ,subject2, subject3;
    int Percentage;
    cout<<"Enter marks of  subject 1 :"<<endl;
    cin>>subject1;
    cout<<"Enter marks of  subject 2 :"<<endl;
    cin>>subject2;
    cout<<"Enter marks of  subject 3 :"<<endl;
    cin>>subject3;
    Percentage=((subject1+subject2+subject3)*100/300);
    cout<<"Percentage is :"<<Percentage<<"%"<<endl;
    return 0;
}