// SPRIAL TRSVERSAL OF MATRIX
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
return 0;
}