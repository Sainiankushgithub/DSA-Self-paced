// SET IN C++ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int,greater<int>>s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    set<int,greater<int>>::iterator iter;
    for(iter=s1.begin();iter!=s1.end();iter++)
    {
        cout<<(*iter)<<" ";
    }
    cout<<endl;
    set<int>s2(s1.begin(),s1.end());
    for(auto it=s2.begin();it!=s2.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    s2.erase(s2.begin(),s2.find(30));
    for(iter=s2.begin();iter!=s2.end();iter++)
    {
        cout<<(*iter)<<" ";
    }
    cout<<endl;
    cout<<"Size of  Set s2 = "<<s2.size()<<endl;
    cout<<"s1.lower_bound : "<<*s1.lower_bound(40)<<endl;
    cout<<"s1.upper_bound : "<<*s1.upper_bound(40)<<endl;
    cout<<"s2.lower_bound : "<<*s2.lower_bound(40)<<endl;
    cout<<"s2.upper_bound : "<<*s2.upper_bound(40)<<endl;
return 0;
}