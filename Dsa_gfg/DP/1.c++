// MEMOIZATION
#include <bits/stdc++.h>
using namespace std;

int SimpleRecursion(int n)
{
  if(n==0 || n==1)
  {
    return n;
  }
  else 
  return SimpleRecursion(n-1)+SimpleRecursion(n-2);
}

// Dynamic programming 

vector<int>memoization;
int DpRecursion(int n)
{
  if(memoization[n]==-1)
  {
    int res;
    if(n==0 || n==1)
    {
      return n;
    }
    else{
      res=DpRecursion(n-1)+DpRecursion(n-2);
      memoization[n]=res;
    }
  }
  return memoization[n];
}
int main()
{
  int n;
  cout << "Enter the number\n";
  cin >> n;
  memoization.resize(n+1,-1);
  // Recursion solution 
  int res = SimpleRecursion(n);
  cout << "Result without Dynamic programming : " << res << endl;

  int res2=DpRecursion(n);
  cout << "Result using Dynamic programming : " << res2 << endl;
  return 0;
}