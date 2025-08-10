// Function Object or Functors
#include<bits/stdc++.h>
using namespace std;
class myComparator{
  public:
  bool operator()(int a ,int b){
    return a>b;
  }
};
void display(vector<int>&vec){
  for(auto &it:vec){
    cout<<it<<" ";
  }
  cout<<endl;
}
struct myComparatorPair{
  bool operator()(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first){
      return p1.second>p2.second;
    }
    return p1.first<p2.first;
  }
};
void displayPair(vector<pair<int,int>>&vp){
  for(auto &it:vp){
    cout<<"{"<<it.first<<","<<it.second<<"}, ";
  }
  cout<<endl;
}
int main()
{
  vector<int>vec={9,6,3,8,4,1,2,4,0};
  sort(begin(vec),end(vec),myComparator());
  display(vec);
  vector<pair<int,int>>vp={{2,1},{2,0},{4,5},{4,3},{1,9}};
  sort(begin(vp),end(vp),myComparatorPair());
  displayPair(vp);
return 0;
}