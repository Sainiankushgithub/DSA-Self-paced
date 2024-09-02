// Shortest Path in undirected graph
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
vector<int>ShortestPath(vector<int>adjList[],int nodes,int source)
{
  vector<int>dist(nodes+1,0);
  vector<int>visited(nodes+1,0);
  queue<int>q;
  q.push(source);
  visited[source]=1;
  while(!q.empty())
  {
    int node=q.front();
    q.pop();
    for(auto it:adjList[node])
    {
      if(visited[it]==false)
      {
        visited[it]=1;
        dist[it]=dist[node]+1;
      }
    }
  }
  return dist;
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
  int source;
  cout<<"Enter the source node where you want to find the shortest path\n";
  cin>>source;
  vector<int>result=ShortestPath(adjList,nodes,source);
  cout<<"Displaying the shortest distance\n";
  for(auto it :result)
  {
    cout<<it<<" ";
  }
return 0;
}