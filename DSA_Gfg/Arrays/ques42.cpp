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
    cout<<"Enter the numbers of an elements of the right array\n";                       // EFFICIENT SOLUTION 
    for(int i=0;i<n;i++)
    {
        cin>>arrright[i];
    }
    cout<<"Displaying your array\n";
    display(arrleft,arrright,n);
return 0;
}