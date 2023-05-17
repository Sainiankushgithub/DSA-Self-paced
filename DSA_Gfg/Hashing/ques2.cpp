// HASHING ----> BY IMPLEMENTATION OF CHAIN
// CHAINING IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class hashTable
{
    public :
    bool table[MAX+1][2];
    public:
    void insert(int arr[],int n);
    bool search(int x);
    void display(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
void hashTable::insert(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            hashTable::table[arr[i]][0]=1;
        }
        else
        {
           hashTable::table[abs(arr[i])][1]=1;
        }
    }
}
bool hashTable::search(int x)
{
        if(x>=0)
        {
            if(table[x][0]==1)
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
            if(table[x][1]==1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
int main()
{
    int size;
    hashTable h;
    cout<<"Enter the size of your array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your hasTable elements\n";
    h.display(arr,size);
    h.insert(arr,size);
    int key;
    cout<<"Enter the element to check whether it's present or not\n";
    cin>>key;
    if(h.search(key))
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }
return 0;
}