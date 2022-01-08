#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return gcd(b,a%b);
  }
}

int main()
{
  int x,y;
  cout<<"Enter two numbers: "<<endl;
  cin>>x>>y;

  int ans=gcd(x,y);
  cout<<"GCD of two numbers is: "<<ans;

  return 0;
}
