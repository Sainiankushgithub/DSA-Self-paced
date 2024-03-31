// SET IN C++ 
#include<bits/stdc++.h>
using namespace std;
void display(set<int,greater<int>>&s)
{
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main()
{

 /* set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(5);
    s.insert(9);
    s.insert(4);
    s.insert(15);
    for(auto x:s)
    {
        cout<<x<<" ";
    }   */

    set<int,greater<int>>s; // Using this All element will store in decsending order
    int node;
    cout<<"Enter the numbers of nodes you want to enter \n";
    cin>>node;
    cout<<"Enter the data to each node\n";
    for(int i=0;i<node;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<"Displaying your data \n";
    display(s);
    int ele;
    cout<<"Enter the element to be search \n";
    cin>>ele;

    // if(s.find(ele)!=s.end())
    // {
    //     cout<<"Element found \n";
    // }
    // else
    // {
    //     cout<<"Element not found \n";
    // }

    // ANOTHER WAY OF FINDING THE ELEMENT 

    auto it=s.find(ele);
    while(it!=s.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<endl;

    cout<<"Maximum Size of the set is : "<<s.max_size()<<endl;
    if(s.empty())
    {
        cout<<"Set is empty ()\n";
    }
    else
    {
        cout<<"Set is not empty()\n";
    }

return 0;
}