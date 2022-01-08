// Input
// t – the number of numbers in list, then t lines follow [t <= 10^6].
// Each line contains one integer: N [0 <= N <= 10^6]
//
// Output
// Output given numbers in non decreasing order.
// Example
// Input:
//
// 5
// 5
// 3
// 6
// 7
// 1
// Output:
//
// 1
// 3
// 5
// 6
// 7
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  int n;
  cin>>n;
  while(n--)
  {
    int t;
    cin>>t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  for(int i:v)
  {
    cout<<i<<endl;
  }

  return 0;
}
