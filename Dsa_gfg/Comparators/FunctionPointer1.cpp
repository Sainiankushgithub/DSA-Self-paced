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
  
  return 0;
}