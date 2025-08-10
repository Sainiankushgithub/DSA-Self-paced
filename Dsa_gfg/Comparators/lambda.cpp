// Lambda Expression 
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(auto &it:v){
    cout<<it<<" ";
  }
  cout<<endl;
}
void displayPair(vector<pair<int,int>>vp){
  for(auto &it:vp){
    cout<<"{"<<it.first<<","<<it.second<<"},";
  }
  cout<<endl;
}
int main()
{
  vector<int>vec={3,4,2,1,6,4,2,8,9,1,0};
  // Way 1 for lambda expresssion 
  /*
  sort(begin(vec),end(vec),[](int a ,int b){
    return a>b;
  });
  */

  // way 2 
  auto myLambda=[](int a ,int b){
    return a>b;
  };
  sort(begin(vec),end(vec),myLambda);
  display(vec);

  vector<pair<int,int>>vp={{2,1},{2,0},{4,5},{4,3},{1,9}};
  auto myLambda2=[](pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first){
      return p1.second<p2.second;
    }
    return p1.first>p2.first;
  };
  sort(begin(vp),end(vp),myLambda2);
  displayPair(vp);
return 0;
}