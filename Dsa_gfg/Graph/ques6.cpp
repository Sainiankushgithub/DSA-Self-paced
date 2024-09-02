// Depth First Search 
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>adjList[],int nodes)
{
  for(int i=0;i<=nodes;i++)
  {
    cout<<"Nodes : "<<i<<"-> ";
    for(auto it:adjList[i])
    {
      cout<<it<<" ";
    }
    cout<<endl;
  }
}
void DFSRec(vector<int>adjList[],vector<int>&result,int visited[],int source)
{
  visited[source]=1;
  result.push_back(source);
  for(auto it:adjList[source])
  {
    if(!visited[it])
    {
      DFSRec(adjList,result,visited,it);
    }
  }
}
vector<int>DFS(vector<int>adjList[],int nodes)
{
  int visited[nodes+1]={0};
  vector<int>result;
  for(int i=1;i<=nodes;i++)
  {
    if(visited[i]==false)
    {
      DFSRec(adjList,result,visited,i);
    }
  }
  return result;
}
int main()
{
  int nodes,edges;
  cout<<"Enter the number of nodes\n";
  cin>>nodes;
  cout<<"Enter the total number of edges\n";
  cin>>edges;
  vector<int>adjList[nodes+1];
  cout<<"Enter the nodes which are connected to the edges\n";
  for(int i=0;i<edges;i++)
  {
    int n1,n2;
    cin>>n1>>n2;
    adjList[n1].push_back(n2);
    adjList[n2].push_back(n1);
  }
  cout<<"Displaying your adjacency list\n";
  display(adjList,nodes);
  vector<int>result=DFS(adjList,nodes);
  for(auto it:result)
  {
    cout<<it<<" ";
  }
  cout<<endl;
return 0;
}