// 18.  Average of Marks in 5 Subjects
#include<iostream>
using namespace std;
int main(){
    int Subect1;
    int Subect2;
    int Subect3;
    int Subect4;
    int Subect5;
    float Average;
    cout<<"Enter a Subect1:"<<endl;
    cin>>Subect1;
    cout<<"Enter a Subect2:"<<endl;
    cin>>Subect2;
    cout<<"Enter a Subect3:"<<endl;
    cin>>Subect3;
    cout<<"Enter a Subect4:"<<endl;
    cin>>Subect4;
    cout<<"Enter a Subect5:"<<endl;
    cin>>Subect5;
    Average=(Subect1+Subect2+Subect3+Subect4+Subect5)/5;
    cout<<"Average is:"<<Average<<endl;
    return 0;
}