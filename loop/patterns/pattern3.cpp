#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter the rows and col : ";
    cin>>row>>col;
    i=1;
    while(i<=row){
        j=1;
        while(j<=col){
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<"\n";
    }
}