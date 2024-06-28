#include<iostream>
using namespace std;
int main(){
    int n=9;
    int i=1,space,j,k=1;

    while(k<=n-1){
        int space=n-k;
        while(space){
            cout<<" ";
            space--;
        }
        j=k;
        while(j){
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        k++;
    }

    while(i<=n){
        space=i-1;
        while(space){
            cout<<" ";
            space--;
            }
            j=1;
            while(j<=n-i+1){
                cout<<"* ";
                j++;
            }
            cout<<"\n";
            i++;



    }

}