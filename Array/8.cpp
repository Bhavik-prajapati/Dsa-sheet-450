//!8-> find Largest sum contiguous Subarray [V. IMP]

// find max sum of subarray
#include<bits/stdc++.h>
using namespace std;
int maxsumofsubArray(int arr[],int n){
   int maxsum=0;
   int cursum=0;
   for (int i = 0; i <n; i++)
   {
      cursum=cursum+arr[i];
      if(cursum>maxsum){
         maxsum=cursum;
      }
      if(cursum<0){
         cursum=0;
      }
   }
   return maxsum;
   

}
int main(){
   int n=5;
   int arr[n]={5,-4,-2,6,-1};
   cout<<maxsumofsubArray(arr,n);
   
}