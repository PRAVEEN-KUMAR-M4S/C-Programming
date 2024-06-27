#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool flag=false;

    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"Not a Prime Number";
    }else{
        cout<<"Prime Number";
    }
}