//! Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<bits/stdc++.h>
using namespace std;
int main(){

   int N = 5;
   int arr[N] = {0,2,1,2,0};

   int low=0;
   int high=N-1;
   int mid=0;

   while (mid<=high)
   {
      if(arr[mid]==0){
         swap(arr[low],arr[mid]);
         low++;
         mid++;
      }else if(arr[mid]==1){
         mid++;
      }
      else if(arr[mid]==2){
         swap(arr[mid],arr[high]);
         high--;
      }
   }

   for (int i = 0; i < N; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   
}