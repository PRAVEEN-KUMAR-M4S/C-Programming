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
        j=row-i+1;
        while(j){
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        i++;
    }
}