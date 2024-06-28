#include<iostream>
using namespace std;

void mergeSort(int arr1[],int n,int arr2[],int m,int ans[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }

    while(i<n){
        ans[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        ans[k]=arr2[j];
        j++;
        k++;
    }
}

void printAns(int arr[],int n){
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
}

int main()
{
    int arr1[10]={1,3,5,7,9},n=5,arr2[10]={2,4,6,90,99},m=5,ans[n+m];

    mergeSort(arr1,n,arr2,m,ans);

    printAns(ans,n+m);
}