#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v = {3,11, 1, 9, 5, 2, 7, 4,10};
    int index = v.size();

    // Using max_element to find the maximum element in the range [v.begin(), v.begin() + index + 1)
    auto max_it = max_element(v.begin()+2, v.begin() + index);

    // Dereference the iterator to get the value
    int max_value = *max_it;

    // If you want the index where This element is present use this --
    int maxIdx = max_it-v.begin();

    cout << "The maximum element till index " << index << " is: " << max_value << endl;
    cout<<"Maximum Element is present at the index : "<<maxIdx<<endl;

    return 0;
}