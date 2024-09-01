// Adjacency matrix 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edges;
    cout<<"Enter the number of nodes ans edges\n";
    cin>>node>>edges;
    vector<vector<int>>adj(node+1,vector<int>(node+1,0));
    cout<<"Enter the edge which is connected\n";
    for(int i=0;i<edges;i++)
    {
        int e1,e2;
        cin>>e1>>e2;
        adj[e1][e2]=1;
        adj[e2][e1]=1;
    }
    for(int i=0;i<node+1;i++)
    {
        for(int j=0;j<node+1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}