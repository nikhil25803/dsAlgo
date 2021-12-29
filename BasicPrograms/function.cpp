//Power of a number
#include <iostream>
// #include <math.h>
using namespace std;

int power(int a,int b)
{
  int ans=1;
  for(int i=1;i<=b;i++)
  {
    ans*=a;
  }

  return ans;
}

int main()
{
  int a,b;
  cout<<"Enter two number: ";
  cin>>a>>b;

  int sol=power(a,b);
  cout<<a<<" to the power "<<b<<" is "<<sol<<endl;


  return 0;
}
