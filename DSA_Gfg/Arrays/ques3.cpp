// LARGEST ELEMENT USING NAIVE APPROACH

 #include<bits/stdc++.h>
using namespace std;

/*int getlargest(int arr[],int size);
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    getlargest(arr,size);
    cout<<"Lagrest elements is "<<getlargest(arr,size);
return 0;
}
int getlargest(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
} */

// ANOTHER METHOD APPROACH         THIS ONE IS ALSO A NAIVE APPROACH

int getlargest(int arr[])
{
    for(int i=0;i<4;i++)
    {
        bool flag=true;
        for(int j=0;j<4;j++)
        {
            if(arr[j]>arr[i]){
            flag=false;
            break;
            }
        }
        if(flag==true)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[]={3,5,6,4};
    getlargest(arr);
    cout<<"Largest element is "<<getlargest(arr);
    return 0;
}