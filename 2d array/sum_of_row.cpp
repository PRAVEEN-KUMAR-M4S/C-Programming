#include<iostream>
using namespace std;
void findSumOdRow(int arr[][3],int target,int n,int m){
    int sum=0;
   
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
          sum=arr[i][j]+sum;
            }
           cout<<sum<<"\n";
        }

}

int findMaxSumRow(int arr[][3],int n,int m){
    int sum=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        maxi=max(maxi,sum);

    }
    return maxi;
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  //  findSumOdRow(arr,7,3,3);

    int ans=findMaxSumRow(arr,3,3);

    cout<<ans;

}