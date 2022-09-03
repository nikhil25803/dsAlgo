#include<iostream>
using namespace std;

double recur(int x, int n)
{
  static double s;
  if (n==0)
  {
    return s;
  }
  s=1+x*s/n;
  return recur(x,n-1);
}

double lop(int x,int n)
{
  double s=1;
  int i;
  double num=1,den=1;

  for(i=1;i<=n;i++)
  {
    num*=x;
    den*=i;
    s+=num/den;
  }
  return s;
}

int main()
{
  double ans = recur(1,10);
  cout<<"Recursive approach answer is: "<<ans<<endl;
  cout<<"Iterative approach answer is: "<<lop(1,10)<<endl;

  return 0;
}
