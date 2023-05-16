// HASHING ---> INSERT DELETE SEARCH 
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool hashTable[MAX+1][2];

// SEARCH YOUR ELEMENT WHETHER IT PRESENT OR NOT

bool search(int x)
{
    if(x>=0)
    {
        if(hashTable[x][0]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        x=abs(x);
        if(hashTable[x][1]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
void insert(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0)
        {
            hashTable[arr[i]][0]=1;
        }
        else
        {
            hashTable[abs(arr[i])][1]=1;
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numebrs of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    insert(arr,size);
    int x;
    cout<<"Enter the number to search whether  it is present in your array or not ?\n";
    cin>>x;
    if(search(x))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";
    }
return 0;
}