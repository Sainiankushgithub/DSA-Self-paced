// INFIX TO POSTFIX CONVERSION
#include <bits/stdc++.h>
using namespace std;
int precedence(char op)
{
  if(op=='-' || op=='+')
  return 1;
  if(op=='/' || op=='*')
  return 2;
  return 0;
}
int main()
{
  // CONVERTING INFIX TO POSTFIX
  string s = " 3+5 / 2 ";
  string s1 = "";
  stack<char> temp;
  for(auto c:s)
  {
    if(isspace(c))
    {
      continue;
    }
    if(isdigit(c))
    {
      s1+=c;
    }
    else
    {
      while(!temp.empty() && (precedence(temp.top())>=precedence(c)))
      {
        s1+=temp.top();
        temp.pop();
      }
      temp.push(c);
    }
  }
  while(!temp.empty())
  {
    s1+=temp.top();
    temp.pop();
  }

  // EVALUATE THIS EXPERSION 

  stack<int>st;
  for(auto c:s1)
  {
    if(isdigit(c))
    {
      st.push(c-'0');
    }
    else
    {
      int operand1=st.top();
      st.pop();
      int operand2=st.top();
      st.pop();
      if(c=='+')
      {
        st.push(operand2+operand1);
      }
      else if(c=='-')
      {
        st.push(operand2-operand1);
      }
      else if(c=='*')
      {
        st.push(operand2*operand1);
      }
      else 
      {
        st.push(operand2/operand1);
      }
    }
  }
  cout<<st.top();
  return 0;
}