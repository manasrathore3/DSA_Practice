#include<iostream>
using namespace std;
int main(){

    int i,j,row,col;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter column : ";
    cin>>col;
    
    for (i = 1; i <=row; i++){
       for (j= 1; j<= col; j++){
       cout<<" * ";
       }
       cout<<endl;
    }
    
    return 0;
}