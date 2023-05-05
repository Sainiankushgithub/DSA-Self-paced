// DISPLAYING YOUR MATRIX USING ARRAY OF VECTOR
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>mat[],int row)
{
    for(int i=0;i<row;i++)
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
    cout<<"Enter the number of row of a matrix\n";
    cin>>row;
    cout<<"Enter the number of column of a matrix\n";
    cin>>column;
    vector<int>mat[row];
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the number of element of row "<<i+1<<endl;
        for(int j=0;j<column;j++)
        {
            int x;
            cin>>x;
            mat[i].push_back(x);
        }
    }
    display(mat,row);
return 0;
}