#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cin>>row;

    i=1;
    while(i<=row){
        j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<"\n";
    }
}