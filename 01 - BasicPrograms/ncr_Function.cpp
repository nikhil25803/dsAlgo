#include <iostream>
using namespace std;

int ncr(int n)
{
  int fact=1;
  for(int i=n;i>=1;i--)
  {
    fact=fact*i;
  }

  return fact;
}

int main()
{
  int n,r;
  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"Enter the value of r: ";
  cin>>r;

  int res=ncr(n)/(ncr(r)*ncr(n-r));
  cout<<res<<endl;


  return 0;
}
