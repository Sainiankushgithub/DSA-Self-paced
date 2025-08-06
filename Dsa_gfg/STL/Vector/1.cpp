#include<bits/stdc++.h>
using namespace std;
int main(){
  // Copying one vector into other 
  vector<int>vec1={1,4,2,6,7,8};
  for(auto v:vec1){
    cout<<v<<" ";
  }
  cout<<endl;

  vector<int>vec2=vec1;
  cout<<"Copying one vector into other \n";
  vec2.push_back(0);
  for(auto it:vec2){
    cout<<it<<" ";
  }

  return 0;
}