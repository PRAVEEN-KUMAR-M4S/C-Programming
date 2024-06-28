#include<iostream>
using namespace std;
int main()
{
    int row,i,j;

    cin>>row;

    i=1;
    while(i<=row){
        j=row-i+1;
        while(j){
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        i++;
    }
}