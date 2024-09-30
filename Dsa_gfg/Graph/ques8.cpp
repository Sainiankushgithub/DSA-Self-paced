// Adjacency List with weighted graph

#include<bits/stdc++.h>
using namespace std;
void AddEdge(vector<pair<int,int>>adj[],int u,int v,int w)
{
  adj[u].push_back({v,w});
  adj[v].push_back({u,w});
}

void printGraph(vector<pair<int,int>>adj[],int V)
{
  for(int i=0;i<V;i++)
  {
    cout<<i<<"--> { ";
    for(auto u:adj[i])
    {
      cout<<"{ "<<u.first<<","<<u.second<<" } ,";
    }
    cout<<" }"<<endl;
  }
}
int main()
{
  int V,E;
  cout<<"Enter the total number of vertex\n";
  cin>>V;
  cout<<"Your vertices are : ";
  for(int i=0;i<V;i++)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Enter the total edges\n";
  cin>>E;
  vector<pair<int,int>>adj[V];
  cout<<"Enter your edges which are connected to each vertex\n";
  for(int i=0;i<E;i++)
  {
    int u,v,w;
    cout<<"Enter the edge "<<i+1<<" with Input vertices & weight\n";
    cout<<"Enter the vertex1 : ";
    cin>>u;
    cout<<"Enter the vertex2 : ";
    cin>>v;
    cout<<"Enter the weight : ";
    cin>>w;
    cout<<endl;
    AddEdge(adj,u,v,w);
  }

  cout<<"Displaying the graph\n";
  printGraph(adj,V);
return 0;
}