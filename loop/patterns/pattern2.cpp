#include<iostream>
using namespace std;
int main(){
    int row,col,i=1,j;

    cout<<"Enter the row and col : ";
    cin>>row>>col;

    while(i<=row){
        j=1;
        while(j<=col){
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<"\n";
    }
}