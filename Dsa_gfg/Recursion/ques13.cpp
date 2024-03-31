// REVERSE STRING USING RECURSION
#include<bits/stdc++.h>
using namespace std;
void display(char ch[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<ch[i];
    }
    cout<<endl;
}
void reverse(char ch[],int length)
{
    if(length==0)
    {
        return ;
    }
    cout<<ch[length-1];                                                  // REVERSE STRING USING RECURSION
    return reverse(ch,length-1);
}
int main()
{
    char ch[20];
    cout<<"Enter the string\n";
    cin.getline(ch,20);
    int length=strlen(ch);
    display(ch,length);
    reverse(ch,length);
return 0;
}