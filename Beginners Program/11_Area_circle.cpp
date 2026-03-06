// 11. Write a program to find the Area of a  circle 
#include <iostream>
using namespace std;
int main(){
    int Radius;
    int Area;
    cout<<"Enter Radius:"<<endl;
    cin>>Radius;
    Area=3.14159*(Radius*Radius);
    cout<<"Area of Circle is:"<<Area;
    return 0;
}