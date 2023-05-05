// ANOTHER WAY OF DECLARING THE MATRIX DYNAMICALLY 
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
int main()
{
    int row,column;
    cout<<"Enter the number of row of matrix\n";
    cin>>row;
    cout<<"Enter the number of column of a matrix\n";
    cin>>column;
    /*
       int **mat;
       mat=new int *[row];
       for(int i=0;i<row;i++)
       {
        mat[i]=new int [column];
       }

    */
    int *mat[row];                        // WE CAN DECLARE THIS WAY TOO
    for(int i=0;i<row;i++)
    {
        mat[i]=new int [column];
    }
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the number of elements of row "<<i+1<<endl;
        for(int j=0;j<column;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Displaying your matrix\n";
    display(mat,row,column);
return 0;
}
