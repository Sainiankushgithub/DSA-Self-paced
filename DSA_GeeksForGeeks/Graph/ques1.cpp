// ADJACENCY  MATRIX USING UNDIRECTED GRAPH
#include<bits/stdc++.h>
#define MAX_Vertices 10
using namespace std;
void printGraph(int AdjMat[MAX_Vertices][MAX_Vertices],int vertices)
{
    cout<<"   ";
    for(int i=0;i<vertices;i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n____________\n";
    for(int i=0;i<vertices;i++)
    {
        cout<<i<<"| ";
        for(int j=0;j<vertices;j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int vertices;
    cout<<"Enter the number of vertces\n";
    cin>>vertices;
    int AdjMat[MAX_Vertices][MAX_Vertices]={0};
    int edges;
    cout<<"Enter the number of an edges\n";
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the Edge i.e (Vertex1 and Vertex2)\n";
        int vertex1,vertex2;
        cin>>vertex1>>vertex2;
        AdjMat[vertex1][vertex2]=1;
        AdjMat[vertex2][vertex1]=1;
    }
    cout<<"Displaying your Adjacency in matrix of Undirected Graph\n";
    printGraph(AdjMat,vertices);
return 0;
}