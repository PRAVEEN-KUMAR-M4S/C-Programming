#include<iostream>
using namespace std;

int pivotee(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }

        mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[],int key,int s,int e){

    int mid=s-(e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            cout<<arr[mid];
            return mid;
        }
        else if(arr[mid] > key){
            e=mid-1;
        }
        else if(arr[mid] < key){
            s=mid+1;
        }
            mid=s-(e-s)/2;
    }

}

int main()
{
    int arr[100]={7,9,1,2,3,0},n=6,key=3,ans=0,arr1[10]={1,2,3},n1=3;
    // int pivote =pivotee(arr,n);

//    if(arr[pivote] <= key <= arr[n-1]){
 
//    ans= binarysearch(arr,key,pivote,n-1);

//    }else{
//    ans= binarysearch(arr,key,0,pivote-1);
//    }

  int ans2=  binarysearch(arr,key,0,2);

   cout<<ans2<<" ";
}