/*ONE ODD OCCURING*/
#include<bits/stdc++.h>
using namespace std;
/*THIS THE NAIVE SOLUTION TO FIND THE ONE ODD OCCURING*/
int oddone(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
         if(count==1)
        return arr[i];
    }
}
int main()
{
    int arr[]={3,4,5,4,3,1,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Size of an array = "<<size<<endl;
    cout<< oddone(arr,size);
return 0;
}