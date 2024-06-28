#include<iostream>
using namespace std;
int main()
{
    int n,space,i,j;
    cin>>n;

    i=1;
    while(i<=n){
        space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j++;

        }
        i++;
        cout<<"\n";
    }
}