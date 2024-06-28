#include<iostream>
using namespace std;
void MoveZeros(int arr[],int n){
    int nonZeroIndex=0;
    for(int i=0;i<n;i++){
        if(arr[1]!=0){
            cout<<arr[i]<<" "<<arr[nonZeroIndex]<<"\n";
            swap(arr[i],arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[10]={2,0,1,3,0,0,0,0},n=8;
    MoveZeros(arr,n);


   
}