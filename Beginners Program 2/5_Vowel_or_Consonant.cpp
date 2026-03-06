#include<iostream>
using namespace std;
int main (){
    char c;
    cout<<"Enter a Character :";
    cin>>c;

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        cout<<"Entered Character is a Vowel";
    }else{
        cout<<"Entered Character is a Consonant";
    }
    return 0;
}
