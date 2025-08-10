// Function Pointer comparator
#include <bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
  for(auto &it:v){
    cout<<it<<" ";
  }
  cout<<endl;
}
bool myComparator(int a ,int b){
  return a>b?true:false;
}
bool myComparatorsPair(pair<int,int>p1,pair<int,int>p2){
  /*
      Below one is working only for the first greater element in the pair 
  */
  //  return p1.first>p2.first;

  /*
      This is for both the greater element if we have 2 pair with first same element but which one is greater that will be taken first
  */

  if(p1.first==p2.first){
    return p1.second>p2.second;
  }
  return p1.first>p2.first;
}

void displaypair(vector<pair<int,int>>&vp){
  for(auto it:vp){
    cout<<"{"<<it.first<<","<<it.second<<"}, ";
  }
}
int main()
{
  vector<int> vec = {0, 7, 4, 1, 0, 3, 2, 9, 4, 10};
  // It will sort in ascending order by default
  // Ascending orer
  // sort(begin(vec), end(vec));
  // If you wanna sort according to you 
  // Descending order 
  sort(begin(vec),end(vec),myComparator);
  display(vec);

  // Let Assume vector of pair 
  vector<pair<int,int>>vp={{2,0},{4,0},{4,1},{1,2},{1,9},{0,2},{2,3}};
  // By Default sorting 
  // sort(begin(vp),end(vp));
  // displaypair(vp);

  // suppose I wanna sort above element in descending order 

  sort(begin(vp),end(vp),myComparatorsPair);
  displaypair(vp);
  return 0;
}