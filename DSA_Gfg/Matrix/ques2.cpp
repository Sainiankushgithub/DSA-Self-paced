// TRANSPOSE OF A MATRIX THROUGH FUNCTION
#include<bits/stdc++.h>
using namespace std;
void display(int **mat,int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int **mat,int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<mat[j][i]<<" ";
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

    // DYNAMIC MEMORY ALLOCATION

    int **mat;
    mat=new int*[row];
    for(int i=0;i<row;i++)
    {
        mat[i]=new int[column];
    }
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the element of row "<<i+1<<endl;
        for(int j=0;j<column;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Dispalying your matrix elements\n";
    display(mat,row,column);
    cout<<"Transpose of your matrix\n";
    transpose(mat,row,column);
    for(int i=0;i<row;i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
return 0;
}