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
    for(int i=0;i<mat.size();i++)
    {
        for(int j=i+1;j<mat[i].size();j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<mat.size();i++)                              // EFFICIENT WAY FIRST WE WILL TRANSPOSE THE MATRIX AND THAN REVERESE IT BY COLUMN WISE
    {
        int low=0,high=mat.size()-1;
        while(low<high)
        {
            swap(mat[low][i],mat[high][i]);
            low++;
            high--;
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
    cout<<"Displaying your matrix 90 degree \n";
    Rotate90Deg(mat);
    display(mat);
return 0;
}