//! Move all the negative elements to one side of the array
#include<bits/stdc++.h>
using namespace std;
void moveallnegtoleft(int arr[],int n){

   int l=0;
   int r=n-1;
   while (l<r)
   {
      if(arr[l]<0 && arr[r]>0){
         l++;
         r--;
      }else if(arr[l]>0 && arr[r]<0){
         swap(arr[l],arr[r]);
         l++;
         r--;
      }else if(arr[l]<0 && arr[r]<0){
         l++;
      }else{
         r--;
      }
   }
}

//! using dutch nation flag algo start

void DutchNationalAlgo(int arr[],int n){
   int low=0;
   int high=n-1;
   while (low<high)
   {
      
      if(arr[low]<0){
         low++;
      }else if(arr[high]>0){
         high--;
      }else{
         swap(arr[low],arr[high]);
      }
   }
}

//! using dutch nation flag algo end

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
int arr[] = {1,1,-1,2,-2};
   int n = sizeof(arr) / sizeof(arr[0]);
   // moveallnegtoleft(arr,n);
   DutchNationalAlgo(arr,n);
   printArray(arr,n);
}