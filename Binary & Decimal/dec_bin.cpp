#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n*=(-1);
    int i=0,ans=0;
    while(n!=0){
        int bit = n & 1;
        ans = ans + (bit * pow(10,i));
         i++;
        n = n >> 1;
       
        }
    int newAns = ~ans+1;
    cout << newAns;
}