// Adjacency list 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nodes,edges;
  cout<<"Enter the number of nodes \n";
  cin>>nodes;
  cout<<"Enter the total number of edges\n";
  cin>>edges;
  vector<int>adjList[nodes+1];
  cout<<"Enter the nodes of the edge\n";
  for(int i=0;i<edges;i++)
  {
    int n1,n2;
    cin>>n1>>n2;
    adjList[n1].push_back(n2);
    adjList[n2].push_back(n1);
  }
  cout<<"Node connected to the edges are \n";
  for(int i=1;i<=nodes;i++)
  {
    cout<<"Node : "<<i<<"-> ";
    for(auto it:adjList[i])
    {
      cout<<it<<" ";
    }
    cout<<endl;
  }
return 0;
}