#include<bits/stdc++.h>
using namespace std;
int noofelementinIntersection(int a[],int b[],int n,int m){

   unordered_set<int> s;
   for (int i = 0; i < n; i++)
   {
      s.insert(a[i]);
   }
   vector<int> ans;
   int count=0;
   for (int i = 0; i < m; i++)
   {
      int key=b[i];
      if(s.find(key)!=s.end()){
         count++;
         ans.push_back(key);
         s.erase(key);
      }

   }


   cout<<"{";
   for (auto x:ans)
   {
      cout<<" "<<x;
   }
   cout<<" }"<<endl;
   
   return count;
}

int main(){
   int a[5]={1,2,3,5,4};
   int b[3]={2,3,5};
cout<<noofelementinIntersection(a,b,5,3)<<endl;
}
