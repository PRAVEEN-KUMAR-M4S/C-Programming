#include<iostream>
using namespace std;

int firstOccer(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]  == key){
            ans=mid;
            end=mid-1;

        }else if(arr[mid] > key){
            end=mid-1;
        }
        else if(arr[mid]< key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]  == key){
            ans=mid;
            start=mid+1;

        }else if(arr[mid] > key){
            end=mid-1;
        }
        else if(arr[mid]< key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[100]={0,0,1,1,2,2,2,2},n=8,key=0;

    cout<<firstOccer(arr,n,key)<<" ";
     cout<<lastOccur(arr,n,key)<<" ";
    

}