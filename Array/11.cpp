#include<bits/stdc++.h>
using namespace std;
int main(){

  int arr[] = {1, 2, 3, 6, 3, 6, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {   
   arr[arr[i]%n]=arr[arr[i]%n]+n;
  }
  cout<<"REPEATED ELEMENTS ARE "<<endl;
  for (int i = 0; i < n; i++)
  {
   if(arr[i]>=n*2){
      cout<<i<<" "<<endl;
   }
  }
  
  
  
}