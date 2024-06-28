#include<iostream>
using namespace std;

int countBit(int n){
    int count=0;
    while(n!=0){
        int bit=n&1;
        if(bit == 1){
            count++;
        }
        n=n>>1;
    }
    return count;
}


int main()
{


int ans1=countBit(7);

int ans2=countBit(3);

cout<<ans1+ans2;

}