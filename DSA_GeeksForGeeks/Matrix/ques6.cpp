// DISPLAYING YOUR MATRIX IN SNAKE PAATERN 
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
void snakePattern(vector<vector<int>>&mat)
{
    for(int i=0;i<mat.size();i++)
    {
        if((i+1)%2==0)
        {
            for(int j=mat[i].size()-1;j>=0;j--)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        else
        {
           for(int j=0;j<mat[i].size();j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int row,column;
    cout<<"Enter the number of row a matrix\n";
    cin>>row;
    cout<<"Enter the number of column of a matrix\n";
    cin>>column;
    vector<vector<int>>mat;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the number of elements for row "<<i+1<<endl;
        vector<int>v;
        for(int j=0;j<column;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        mat.push_back(v);
    }
    cout<<"Dispalying your matrix \n";
    display(mat);
    cout<<"Displaying your matrix in snake pattern \n";
    snakePattern(mat);
return 0;
}