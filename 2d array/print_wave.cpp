#include<iostream>
using namespace std;


void printWave(int arr[][3],int n,int m){
    for(int col=0;col<m;col++){
        if( col & 1 ){
            for(int row=n-1;row>=0;row--){
                cout<<arr[row][col];
            }
            cout<<"\n";
        }else{
        for(int row=0;row<n;row++){
            cout<<arr[row][col];
        }
        cout<<"\n";
        }
    }
    
}


int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

printWave(arr,3,3);



}