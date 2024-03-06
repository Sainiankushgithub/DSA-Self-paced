/*ONE ODD OCCURING*/
#include<bits/stdc++.h>
using namespace std;
/*THIS THE NAIVE SOLUTION TO FIND THE ONE ODD OCCURING*/
/*int oddone(int arr[],int size)
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
         if(count%2!=0)
        return arr[i];
    }
}*/

/*EFFICIENT WAY OF FINDING THE ODD ONE OCCURING*/
void oddone(int arr[],int size)
{
    int res=arr[0];
    for(int i=1;i<size;i++)
    {
        res=res^arr[i];
        cout<<"res for i = "<<i<<" ---> "<<res<<endl;
    }
    cout<< res;
}
int main()
{
    int arr[]={4,4,7,4,8,7,7,7,8,8};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Size of an array = "<<size<<endl;
    oddone(arr,size);
return 0;
}