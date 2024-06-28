#include<iostream>
using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp < arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;

    }
}

int main(){
    int arr[10]={10,1,7,4,8,2,11},n=7;
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}