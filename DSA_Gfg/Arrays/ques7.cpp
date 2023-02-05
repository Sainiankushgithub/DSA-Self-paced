// REMOVE DUPLICATE FROM SORTED ARRAY
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
int removeduplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {                                                 // NEED HELP THERE HOW TO TAKE THE NEW SIZE AFTER REMOVING THE DUPLICATE
            if(arr[j]==arr[j+1])                          // ELEMENT I M NOT ABLE TO FIGURE OUT THE NEW SIZE THAT HOW WOULD I TAKE ? 
            {
                for(int k=j;k<size-i;k++)
                {
                    int temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }
            }
        }
    }
    return size;
}
int main()
{
    int arr[]={10,20,20,30,30,40,40,40,50};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Displaying the array before removing the duplicate elements\n";
    display(arr,size);
    removeduplicate(arr,size);
    int size1=removeduplicate(arr,size);
    cout<<"Displaying the array after removing the duplicate elements\n";
    display(arr,size1);
return 0;
}