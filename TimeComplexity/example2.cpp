/*
Given T test cases and an array of Size N.
Print sum of array in each test case.
Constrains:
1 <=T<=1000
1 <=N<=1000
1 <=a[i] <=1000;
*/

#include <iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int ct=0;
  while(t--)
  {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;++i)
    {
      int x;
      cin>>x;
      sum+=x;
      ct++;
    }
    cout<<sum<<endl;
  }

  //Time Complexity o(t*n)=o(n^2)


  return 0;
}
