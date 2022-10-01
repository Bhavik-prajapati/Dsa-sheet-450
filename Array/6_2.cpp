//! Find the Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;

int main(){

   int m=4;
   int n=2;
   int a[m]={1,2,2,3,4};
   int b[n]={2,2,2,4};
   vector<int> v;
   
for (int i = 0; i < m; i++)
{
 int element=a[i];

   for (int j = 0; j < n; j++)
   {
      if(element==b[j]){
         v.push_back(element);
         b[j]=INT_MIN;
         break;
      }  
   }

}
for (auto x:v)
{
   cout<<x<<" ";
}
cout<<endl;
}