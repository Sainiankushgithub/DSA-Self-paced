// Adjacency list 
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int u,int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void printGraph(vector<int>adj[],int V)
{
  for(int i=0;i<V;i++)
  {
    for(auto u:adj[i])
    {
      cout<<u<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int V;
  cout<<"Entet the  total number of vertexs\n";
  cin>>V;
  vector<int>adj[V];
  cout<<"Enter the edges which are connected to the vertex\n";
  for(int i=0;i<V;i++)
  {
    int u,v;
    cin>>u>>v;
    addEdge(adj,u,v);
  }
  cout<<"Displaying the graph using adjacency list\n";
  printGraph(adj,V);
return 0;
}