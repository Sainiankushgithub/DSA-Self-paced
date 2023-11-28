// MAP SET IN C++
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int ,int>m;
    m.insert({1,20});
    m.insert({3,50});
    m.insert({10,60});
    m.insert({5,70});
    map<int,int>::iterator iter;
    for(iter=m.begin();iter!=m.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"Map size : "<<m.size()<<endl;
    cout<<"Erasing the Key 10 \n";
    m.erase(10);
    cout<<"After Erasing size : "<<m.size()<<endl;
    for(iter=m.begin();iter!=m.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    m.insert({1,45});
    m.insert({2,20});
    cout<<"Displaying after some operation \n";
    for(iter=m.begin();iter!=m.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
return 0;
}