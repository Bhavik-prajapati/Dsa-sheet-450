#include<bits/stdc++.h>
using namespace std;
int main(){
// string s = { "ABCD" };
int n=6;
vector<int> v = {1, 2, 3, 6, 5, 4};
   bool ans=next_permutation(v.begin(),v.end());

     if (ans == false)
        cout << "No Word Possible"
            << endl;
    else
      {
         for(auto x:v){
        cout << x << endl;
            
         }
      }





    

}