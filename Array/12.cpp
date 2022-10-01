#include<bits/stdc++.h>
using namespace std;
//!bruteforce
void mergeArrays(int arr1[],int arr2[],int n1,int n2){
    priority_queue <int, vector<int>, greater<int> > pq;
    for (int i = 0; i < n1; i++)
    {
      pq.push(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
      pq.push(arr2[i]);
    }

    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

void mergesimple(int arr1[],int arr2[],int n1,int n2){
   vector<int> v;
    for (int i = 0; i < n1; i++)
    {
      v.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
      v.push_back(arr2[i]);
    }
    sort(v.begin(),v.end());
    for(auto x:v){
      cout<<x<<" ";
    }cout<<endl;

}

// !bruteforce


//todo optimizing

   void mergeoptimizedway(int arr1[],int arr2[],int n1,int n2){
      int gap=ceil(n1+n2/2);
      int i=arr1[0];
      int j=arr2[gap];
      while (gap<=1)
      {

         if(i>j){
            i++;j++;
         }
         else{
            swap(arr1[i],arr2[j]);
         }
         gap=ceil(n1+n2/2);
      }

      for (int i = 0; i < n1; i++)
      {
         cout<<arr1[i]<<" ";
      }
      for (int i = 0; i < n2; i++)
      {
         cout<<arr2[i]<<" ";
      }
      


   }



   


//todo optimizing



int main(){
    int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8};
    int n1 = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);
    // Function call
   //  !bruteforce start
   //  mergeArrays(a, b, n1,n2);
   // mergesimple(a,b,n1,n2);

   //  !bruteforce end
   mergeoptimizedway(a,b,n1,n2);

    return 0;
}