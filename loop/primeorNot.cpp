#include<iostream>
using namespace std;
int main(){
    int n,i=2;

    cout<<"Enter the number : ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime number";
            exit(0);
        }
        i++;
    }
    cout<<"Prime number";
    
}