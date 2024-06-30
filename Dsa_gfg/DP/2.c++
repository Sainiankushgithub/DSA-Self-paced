// TABULATION DP PROGRAMMING
#include <bits/stdc++.h>
using namespace std;

int main()
{

  // SIMPLE APPROACH
  int n;
  cout << "Enter the  number\n";
  cin >> n;
  if (n == 0 || n == 1)
  {
    cout << n << endl;
    return 0;
  }
  int res, v1 = 0, v2 = 1;
  for (int i = 2; i <= n; i++)
  {
    res = v1 + v2;
    v1 = v2;
    v2 = res;
  }
  cout << "Tabulation result : " << res << endl;
  return 0;
}