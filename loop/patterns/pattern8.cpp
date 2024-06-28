#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k;
    cin>>row;

    i=1;
    k=1;
    while(i<=row){
        j=1;
        while(j<=i){
            cout<<k<<" ";
            j++;
            k++;
        }
        cout<<"\n";
        i++;
    }
}