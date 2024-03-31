// SORTING AND INSERT THE INTERVAL 
#include<bits/stdc++.h>
using namespace std;
void display(vector<vector<int>>&intervals)
{
  for(int i=0;i<intervals.size();i++)
  {
    for(int j=0;j<intervals[i].size();j++)
    {
      cout<<intervals[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int row;
  cout<<"Enter the numbers of row \n";
  cin>>row;
  vector<vector<int>>intervals(row);
  cout<<"Your matirx is "<<row<<"x2\n";
  for(int i=0;i<row;i++)
  {
    cout<<"Enter the "<<i+1<<" row elements \n";
    for(int j=0;j<2;j++)
    {
      int element;
      cin>>element;
      intervals[i].push_back(element);
    }
  }
  cout<<"Displaying your entered elements\n";
  display(intervals);
  sort(intervals.begin(),intervals.end());
  cout<<"Displaying after sorting the intervals \n";
  display(intervals);
return 0;
}