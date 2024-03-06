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
 int main()
 {
    int n1,n2;
    cout<<"Enter the size of an array 1 \n";
    cin>>n1;
    cout<<"Enter the size of an array 2 \n";                                       // EFFICIETN  SOLUTION : 
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
    return 0;
 }