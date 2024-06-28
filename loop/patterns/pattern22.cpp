#include<iostream>
using namespace std;
int main()
{
    int row,i,j,space;
    i=1;

    cin>>row;

    while(i<=row){
        space=row-i;
        while(space){
              cout<<" ";
        space--;
        }
      
    
    j=1;
    while(j<=i){
        cout<<j;
        j++;
    }

    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }
    cout<<"\n";
    i++;
    }
}