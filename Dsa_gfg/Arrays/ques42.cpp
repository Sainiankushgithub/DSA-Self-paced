// MAXIMUM APPEARING ELEMENT IN AN ARRAY 
#include<bits/stdc++.h>
using namespace std;
void display(int arrleft[], int arrright[],int n)
{
    cout<<"Displaying the left array elements \n";
    for(int i=0;i<n;i++)
    {
        cout<<arrleft[i]<<" ";
    }
    cout<<endl;
    cout<<"Displaying the right array elements \n";
    for(int i=0;i<n;i++)
    {
        cout<<arrright[i]<<" ";
    }
    cout<<endl;
}
int maxappear(int arrleft[],int arrright[],int n)
{
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=arrleft[i]; j<=arrright[i];j++)
        {
            freq[j]+=1;
        }
    }
    int res=0;
    for(int i=1;i<100;i++)
    {
        if(freq[i]>freq[res])
        {
            res=i;
        }
    }
    return res;
}
int main()
{
     int n;
    cout<<"Enter the size of an array\n";                                         // METHOD 1 : 
    cin>>n;
    int arrleft[n];
    int arrright[n];
    cout<<"Enter the numbers of an elements of the left array\n";                       // EFFICIENT SOLUTION 
    for(int i=0;i<n;i++)
    {
        cin>>arrleft[i];
    }
    cout<<"Enter the numbers of an elements of the right array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arrright[i];
    }
    cout<<"Displaying your array\n";
    display(arrleft,arrright,n);
    cout<<"Maximum apperaing element in the array is : "<<maxappear(arrleft,arrright,n);
return 0;
}