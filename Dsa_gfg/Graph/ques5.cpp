// Breadth First Search in Graph
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

vector<int>Bfs(vector<int>adjList[],int nodes)
{
  vector<int>visited(nodes+1,0);
  visited[0]=1;
  queue<int>q;
  vector<int>result;
  q.push(0);
  while(!q.empty())
  {
    int v=q.front();
    q.pop();
    result.push_back(v);
    for(auto it:adjList[v])
    {
      if(!visited[it])
      {
        visited[it]=1;
        q.push(it);
      }
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
  vector<int>result=Bfs(adjList,nodes);
  for(auto it:result)
  {
    cout<<it<<" ";
  }
  cout<<endl;
return 0;
}