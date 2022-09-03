#include <iostream>
#include <iomanip>
using namespace std;

int e(int x, int n)
{
  static double p=1,f=1;
  double r;
  if(n==0)
  {
    return 1;
  }
  else
  {
    r=e(x,n-1);
    p*=x;
    f*=n;
    return r + p/f;
  }
}

int main()
{
  double en,xn;
  cout<<"Enter the value of x and y: "<<endl;
  cin>>en>>xn;
  double ans=e(en,xn);
  cout<<setprecision(2)<<ans<<endl;

  return 0;
}
