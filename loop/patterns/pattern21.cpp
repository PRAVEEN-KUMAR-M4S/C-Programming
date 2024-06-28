#include<iostream>
using namespace std;
int main()
{
    int row,i,j,space;

    cin>>row;

    i=1;
    while(i<=row)
    {
        space=i-1;
        while(space){
            cout<<" ";
            space--;

        }
        j=i;
        while(j<=row){
            cout<<j;
            j++;
        }
        cout<<"\n";
        i++;
    }
}