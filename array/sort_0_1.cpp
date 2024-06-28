#include<iostream>
using namespace std;
void sort01(int arr[],int n){
      int i=0,j=n-1;
    while(i<j){
      
        if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i],arr[j]);
        }
    }
}
int main()
{
    int arr[100]={1,1,0,0,0,0,1,0},n=8;

    sort01(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}