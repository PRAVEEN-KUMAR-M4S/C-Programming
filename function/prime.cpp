#include<iostream>
using namespace std;

void isPrime(int n){
    bool flag=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Prime";
    }else{
        cout<<"Not prime";
    }
}


int main()
{
int n;

cin>>n;

isPrime(n);
}