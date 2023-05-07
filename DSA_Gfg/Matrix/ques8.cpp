// TRANSPOSE OF A MATRIX 
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
void transpose(vector<vector<int>>&mat)
{
    int r=mat.size();
    // cout<<" r="<<r<<endl;
    int c=mat[0].size();
    // cout<<" c= "<<c<<endl;
    int temp[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            temp[i][j]=mat[j][i];
        }
    }
    for(int i=0;i<r;i++)                             // NAIVE SOLUTION 
    {
        for(int j=0;j<c;j++)
        {
            mat[i][j]=temp[i][j];
        }
    }
}
int main()
{
    int row,column;
    cout<<"Enter the size of row\n";
    cin>>row;
    cout<<"Enter the size of a column\n";
    cin>>column;
    vector<vector<int>>mat;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the elements of row "<<i+1<<endl;
        vector<int>v;
        for(int j=0;j<column;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        mat.push_back(v);
    }
    cout<<"Displaying your matrix before transpose\n";
    display(mat);
    cout<<"Displaying your matrix After transpose\n";
    transpose(mat);
    display(mat);
return 0;
}