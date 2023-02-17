// MOVE ALL ZERO TO THE END
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void move(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[j]!=0)
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the number of an elements of an with some zero so that this code will move it to the end\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array before shifting the zeroes\n";
    display(arr,size);
    move(arr,size);
    cout<<"Displaying your arary after shifting the zeroes\n";
    display(arr,size);
return 0;
}