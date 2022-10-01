#include<bits/stdc++.h>
using namespace std;
int main(){

   vector<int,vector<int>> vec;

   for (int i = 0; i < 3; i++)
   {
      vector<int> v1;
       for (int i = 0; i < 3; i++)
       {
         int x;
         cin>>x;
         v1.push_back(x);
       }
       vec.push_back(v1);
   }


    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

   
  








}