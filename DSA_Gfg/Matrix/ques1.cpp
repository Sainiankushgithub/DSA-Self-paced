// DISPLAYING YOUR MATRIX THROUGH FUNCTION USING DYNAMIC MEMMORY ALLOCATION
#include<bits/stdc++.h>
using namespace std;
void display(int **matrix,int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row,column;
    cout<<"Enter the size of row \n";
    cin>>row;
    cout<<"Enter the size of column \n";
    cin>>column;

    //  DYNAMIC MEMORY ALLOCATION 

    int **matrix=new int*[row];
    for(int i=0;i<row;i++)
    {
        matrix[i]=new int[column];
    }
    cout<<"Enter the numbers of an elements of your matrix\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Dispalying your matrix through function \n";
    display(matrix,row,column);

    //  DEALLOCATING THE DYNAMIC MEMORY ALLOCATION 
     for(int i=0;i<row;i++)
     {
        delete[] matrix[i];
     }
     delete[] matrix;
return 0;
}