#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid] < arr[mid+1]){
            start=mid+1;
        }
        else if(arr[mid] > arr[mid+1]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}

int main()
{
    int arr[100]={0,8,9,1},n=4;

    cout<<peak(arr,n);
}