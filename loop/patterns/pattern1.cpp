#include<iostream>
using namespace std;
int main(){
    int row,i=1,j=1;

    cout<<"enter the row and col : ";
    cin>>row;

    while(i<=row){
        j=1;
        while(j<=row){
            cout<<"* ";
            j++;
        }
        
        cout<<endl;
        i++;
    }

}