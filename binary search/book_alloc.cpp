#include<iostream>
using namespace std;

bool isPossibleSol(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i] <=mid){
            pageSum=pageSum+arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i] > mid){
                return false;
            }
        }
    }
    return true;
}

int bookAlloc(int arr[],int n,int m){
    int s=0,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossibleSol(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[100]={10,20,30,40},n=4,m=2;

    int ans=bookAlloc(arr,n,m);

    cout<<ans;
}