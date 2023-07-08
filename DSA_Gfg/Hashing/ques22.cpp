//  LONGEST SUBARRAY WITH EQUAL 0s and 1s EFFICIENT SOLUTION
#include<bits/stdc++.h>
using namespace std;
void display(bool arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int LonSubArray(bool arr[],int n)
{
    unordered_map<int, int> countMap;
    int maxLength=0;
    int count=0;

    for (int i=0;i<n;i++) {
        count += (arr[i]==0)?1:-1;

        if (count==0) {
            maxLength=i + 1;
        } else if (countMap.find(count)!=countMap.end()) {
            maxLength=max(maxLength, -countMap[count]);
        } else {
            countMap[count]=i;
        }
    }

    return maxLength;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    bool arr[n];
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying your array elements\n";
    display(arr,n);
    cout<<"Longest sub array with 0s and 1s is : "<<LonSubArray(arr,n)<<endl;
return 0;
}