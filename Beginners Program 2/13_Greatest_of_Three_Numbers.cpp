 #include<iostream>
using namespace std;
int main (){
    int Number_1;
    int Number_2;
    int Number_3;
    cout<<"Enter Number_1 :";
    cin>>Number_1;
    cout<<"Enter Number_2 :";
    cin>>Number_2;
    cout<<"Enter Number_3 :";
    cin>>Number_3;

    if (Number_1>=Number_2 && Number_1>=Number_3 ){
        cout<<Number_1<<" is the greatest\n";
    }else if(Number_2>=Number_3 && Number_2>=Number_1 ){
        cout<<Number_2<<" is the greatest\n";
    }else{
        cout<<Number_3<<" is the greatest\n";
    }
    
    return 0;
}