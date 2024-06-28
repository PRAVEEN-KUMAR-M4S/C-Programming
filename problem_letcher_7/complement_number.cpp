#include<iostream>
using namespace std;
int main()
{
    int n,mask=0;
    int m=n;
    cin>>n;

    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }

    int ans=(~n)&mask;
    cout<<ans;

}