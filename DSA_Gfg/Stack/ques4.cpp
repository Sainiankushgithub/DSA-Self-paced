// BALANCED MATCHING THE PARENTHESIS 
#include<bits/stdc++.h>
using namespace std;
bool Matching(char a,char b)
{
    return(a=='('&&b==')'||a=='['&&b==']'||a=='{'&&b=='}');
}
bool Balancedparen(string str)
{
    stack<char>s;
    for(char x:str)
    {
        if(x=='('||x=='['||x=='{')
        {
            s.push(x);
        }
        else
        {
            if(s.empty()==true)
            {
                return false;
            }
            if(Matching(s.top(),x)==false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}
int main()
{
    string str;
    cout<<"Enter the parenthesis : ";
    cin>>str;
    if(Balancedparen(str))
    {
        cout<<"YES !!! Parenthesis Balanced : "<<str<<endl;
    }
    else
    {
        cout<<"NO !!! Parenthesis not Balanced : "<<str<<endl;
    }
return 0;
}
