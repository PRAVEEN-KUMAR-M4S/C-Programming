#include<iostream>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;i<n-i;j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10]={10,1,7,6,14,9},n=6;
    bubble(arr,n);
    printArr(arr,n);
}