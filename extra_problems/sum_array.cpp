#include<iostream>
using namespace std;

void Sum(int arr[],int arr2[],int n1,int n2){
    int i=n1-1,j=n2-1,carry=0,sum=0,ans[10]={0};
    while(i>=0 && j>=0){

         sum=arr[i]+arr2[j]+carry;
         carry=sum/10;
         sum=sum%10;
         ans[i]=sum;
         i--;j--;


    }

    
    for(int k=0;k<n1;k++){
        cout<<ans[k]<<" ";
    }
}


int main(){
    int arr[10]={1,1,1,9},n1=4,arr2[10]={1,1,1,1},n2=4;
    Sum(arr,arr2,n1,n2);

}