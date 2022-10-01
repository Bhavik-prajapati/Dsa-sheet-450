#include<bits/stdc++.h>
using namespace std;
   int maxSubArraySum(int arr[],int n)
   {
      int maxsofar=INT_MIN;
      int maxendhere=0;
      for (int i = 0; i < n; i++)
      {
         maxendhere+=arr[i];  
         if(maxsofar<maxendhere){
            maxsofar=maxendhere;
         }
         if(maxendhere<0){
            maxendhere=0;
         }
      }
      return maxsofar;
   }
int main(){
 int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
}