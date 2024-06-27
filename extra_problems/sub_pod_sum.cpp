#include<iostream>
using namespace std;
int main()
{
    int n,p=1,s=0,mod;
    cin>>n;

    while(n!=0){
        mod=n%10;
        p=p*mod;
        s=s+mod;
        n=n/10;
        
    }
    int sub=p-s;
    cout<<abs(sub);
}