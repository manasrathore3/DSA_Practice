#include<iostream>
using namespace std;
int main (){
    int side_1;
    int side_2;
    int side_3;
    cout<<"Enter side_1 :";
    cin>>side_1;
    cout<<"Enter side_2 :";
    cin>>side_2;
    cout<<"Enter side_3 :";
    cin>>side_3;

    if (side_1==side_2==side_3 ){
        cout<<"Equilateral Triangle";
    }else if(side_1==side_2 || side_1==side_3 || side_2==side_3 || side_2==side_1){
        cout<<"Isosceles Triangle";
    }else{
        cout<<"Scalene Triangle";
    }
    
    return 0;
}