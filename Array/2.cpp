
#include<bits/stdc++.h>
using namespace std;
//! bruteforce Aprroch start
void findminmax(int arr[], int size)
{
   int min=INT_MAX;
   int max=0;
   for (int i = 0; i < size; i++){
      if(arr[i]>max){
         max=arr[i];
      }
      if(arr[i]<min){   
         min=arr[i];
      }
   }
   cout<<"max is "<<max<<endl;
   cout<<"min is "<<min<<endl;
}
//! bruteforce Aprroch end

//! semioptimized Aprroch

struct Pair{
   int min;
   int max;
};
Pair getminmax(int arr[],int n){


   struct Pair minmax;
   if(n==1)
   {
      minmax.max=arr[0];
      minmax.min=arr[0];
      return minmax;
   }
   if(arr[0]>arr[1]){
      minmax.min=arr[1];
      minmax.max=arr[0];

   }else{
       minmax.max = arr[1];
       minmax.min = arr[0];
   }
   for (int i = 2; i < n; i++)
   {
      if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
      else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
      
   }
   return minmax;
}

//! semioptimized Approch end



int main(){
   int arr[] = {1, 2, 3, 4, 5, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   findminmax(arr,n);
   // struct Pair p1=getminmax(arr,n);  
   // cout<<p1.min<<endl;
   // cout<<p1.max<<endl;
   
   
}