// ROTATE YOUR MATRIX 90 DEGREE 
#include<bits/stdc++.h>
using namespace std;
void display(vector<vector<int>>&mat)
{
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Rotate90Deg(vector<vector<int>>&mat)
{
    int temp[mat.size()][mat[0].size()];
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)                               // NAIVE METHOD 2 
        {
            temp[mat.size()-j-1][i]=mat[i][j];
        }
    }
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)
        {
            mat[i][j]=temp[i][j];
        }
    }
}
int main()
{
    int row,column;
    cout<<"Enter the size of a row\n";
    cin>>row;
    cout<<"Enter the size of a column\n";
    cin>>column;
    vector<vector<int>>mat;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the number elements for row -> "<<i+1<<endl;
        vector<int>v;
        for(int j=0;j<column;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        mat.push_back(v);
    }
    cout<<"Displaying your matrix \n";
    display(mat);
    Rotate90Deg(mat);
    cout<<"Displaying your matrix 90 degree \n";
    display(mat);
return 0;
}