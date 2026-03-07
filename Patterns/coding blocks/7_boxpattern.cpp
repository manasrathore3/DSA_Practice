#include<iostream>
using namespace std;
int main(){

    int n,j;
    cout<<"Enter N : ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"* ";
    }
    cout<<endl;
    for (int j = 0; j < (n-2); j++){
        cout<<"* ";
        for (int k = 0; k < (n-2); k++){
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
    for (int i = 0; i < n; i++){
        cout<<"* ";
    }

    return 0;

}    