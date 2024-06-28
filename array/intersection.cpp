#include<iostream>
using namespace std;

void intersection(int arr1[],int n,int arr2[],int m,int arr[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr[1] < arr[j]){
            i++;
        }
        if(arr1[i] == arr2[j]){
            arr[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        if(arr1[i] > arr2[j]){
            j++;
        }
    }

}

int main()
{
    int arr1[100]={1,2,2,2,3,4},arr2[100]={2,2,3,3},n=6,m=4,arr[100]={0};

    intersection(arr1,n,arr2,m,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}