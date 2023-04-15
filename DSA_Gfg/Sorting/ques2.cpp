// SORTING IN STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,5,7,1};
    sort(v.begin(),v.end());
    cout<<"Displaying your element in inccreasing order\n";
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Displaying your element in decreasing order\n";
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v)
    {
        cout<<x<<" ";
    }
return 0;
}