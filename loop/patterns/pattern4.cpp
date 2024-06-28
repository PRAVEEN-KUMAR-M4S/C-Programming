#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"enter the row and col :";
    cin>>row>>col;
    i=1;
    while(i<=row){
        j=1;
        while(j<=col){
            cout<<col-j+1;
            j++;

        }
        i++;
        cout<<"\n";
    }
}