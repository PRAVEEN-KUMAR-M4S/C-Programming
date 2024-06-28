#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n==0){
        cout<<"The number is 0";
    }else if(n<0){
        cout<<"The number is negative";
    }else{
        cout<<"positive number";
    }

}