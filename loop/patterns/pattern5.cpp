#include<iostream>
using namespace std;
int main(){
    int n,i,j,k=1;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<k<<" ";
            j++;
            k++;
        }
        i++;
        cout<<"\n";
    }
}