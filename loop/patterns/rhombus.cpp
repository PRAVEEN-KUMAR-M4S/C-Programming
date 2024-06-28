#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1,space,j;

    while(i<=n){
        space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        j=n;
        while(j){
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        i++;
    }
}