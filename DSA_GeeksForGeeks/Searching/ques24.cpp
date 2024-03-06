 // MEDIAN OF TWO SORTED ARRAY
 #include<bits/stdc++.h>
 using namespace std;
 void display(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 void merge(int arr1[],int arr2[],int n1,int n2,int temp[])
 {
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            temp[k++]=arr2[j++];
        }
        else
        {
            temp[k++]=arr1[i++];
        }
    }
    while(i<n1)
    {
        temp[k++]=arr1[i++];
    }
    while(j<n2)
    {
        temp[k++]=arr2[j++];
    }
 }
 float median(int temp[],int n)
{
    float average;
    if(n%2==0)
    {
       average=(float)(temp[n/2-1]+temp[n/2])/2;
       return average;
    }
    else
    {
        return temp[n/2];
    }
}
 int main()
 {
    int n1,n2;
    cout<<"Enter the size of an array 1 \n";
    cin>>n1;
    cout<<"Enter the size of an array 2 \n";                                       // NAIVE SOLUTION : 
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    int temp[n1+n2];
    cout<<"\t\t  Entered only sorted elements !!!!!\n\n ";
    cout<<"Enter the numbers of an elements of an array 1 \n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the numbers of an elements of an array 2 \n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Displaying your array\n";
    display(arr1,n1);
    cout<<"Displaying your array\n";
    display(arr2,n2);
    merge(arr1,arr2,n1,n2,temp);
    cout<<"Displaying your merge of two array\n";
    display(temp,n1+n2);
    cout<<"Displaying the median of two array : "<<median(temp,n1+n2);
 return 0;
 }