// ACTIVITY SELECTION PROBLEM
#include<bits/stdc++.h>
using namespace std;
void display(vector<vector<int>>&pair)
{
  for(int i=0;i<pair.size();i++)
  {
    for(int j=0;j<pair[i].size();j++)
    {
      cout<<pair[i][j]<<" ";
    }
    cout<<endl;
  }
}
int maxCount(vector<vector<int>>&pair)
{
  int res=1,count=1;
  for(int i=0;i<pair.size()-1;i++)
  {
    int initial=pair[i][pair[i].size()-1];
    count=1;
    for(int k=i+1;k<pair.size();k++)
    {
      int final=pair[k][0];
      if(initial<=final)
      {
        count++;
        res=max(res,count);
        initial=pair[k][pair[k].size()-1];
      }
    }
  }
  return res;
}
int main()
{
  // vector<vector<int>>pair={{2,3},{1,4},{5,8},{6,10}};
  vector<vector<int>>pair={{1,3},{2,4},{3,8},{10,11}};
  cout<<"Displaying your vector "<<endl;
  display(pair);
  cout<<"Maximum count : "<<maxCount(pair)<<endl;
return 0;
}