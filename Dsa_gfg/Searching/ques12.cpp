// SQUARE RROOT OF A NUMBER EFFICIENT WAY
#include<bits/stdc++.h>
using namespace std;
int SquareRoot(int n)
{
    int low=0,high=n;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq==n)
        {
            return mid;
        }
        else if(msq>n)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
             ans=mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number to find its square root\n";
    cin>>n;
    cout<<"Square root of your number is : "<<SquareRoot(n);
return 0;
}