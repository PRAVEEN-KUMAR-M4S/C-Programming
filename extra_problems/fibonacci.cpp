#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n;
    cin>>n;

    cout<<"0 1 ";

    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;

    }
}