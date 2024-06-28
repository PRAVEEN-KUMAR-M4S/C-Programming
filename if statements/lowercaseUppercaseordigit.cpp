#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character here : ";
    cin>>ch;
    if(ch >='a' && ch<='z'){
        cout<<"Lower case";
    }else if(ch>='A' && ch<='Z'){
        cout<<"Upper case";
    }else{
        cout<<"Number";
    }
}