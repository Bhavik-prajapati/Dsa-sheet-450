//! Find the Union  of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
int main(){
      int n=5,m=3;
      int a[n]={1,2,3,4,5};
      int b[m]={1,2,3};
      set<int> s;
        for(int i=0;i<n;i++){
            int x=a[i];
            s.insert(x);
        }
        for(int i=0;i<m;i++){
            int x=b[i];
            s.insert(x);
        }

        for(auto x:s){
         cout<<x<<" ";
        }cout<<endl;
        cout<<s.size()<<endl;

}