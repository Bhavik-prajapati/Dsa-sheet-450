//! Reverse an arrray
#include<bits/stdc++.h>
using namespace std;

void revereseArray(int arr[], int start, int end){
   while (start<end)
   {
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
}
//! recursive approch start
void revArray(int arr[],int s,int e){
   if(s>=e)return;
   swap(arr[s],arr[e]);
   revArray(arr,s+1,e-1);
}
// !recursive end

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
   int arr[] = {1, 2, 3, 4, 5, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   revereseArray(arr,0,n-1);   //! n-1
   // revArray(arr,0,n-1);
   printArray(arr,n);
}