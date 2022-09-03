#include <iostream>
using namespace std;

//General approach [O(n) Complexity]

int fact(int n)
{
  if(n<=1)
  {
    return 1;
  }
  return n*fact(n-1);
}

int nCr(int n,int r)
{
  int num,den;

  num=fact(n);
  den=fact(r)*fact(n-r);

  return num/den;
}

// ANother approach

int NCR(int n,int r)
{
  if(r==0 || n==r)
  {
    return 1;
  }
  return NCR(n-1,r-1)+NCR(n-1,r);
}

int main()
{
  int n,r;
  cout<<"Enter the value of n and r: ";
  cin>>n>>r;
  int ans = fact(n)/(fact(r)*fact(n-r));
  cout<<"Answer through Factorial approach is: "<<ans<<endl;

  int ans2 = nCr(n,r);
  cout<<"Answer using nCr approach is: "<<ans2<<endl;

  int ans3 = NCR(n,r);
  cout<<"Answer through NCR approach is: "<<ans3<<endl;

  return 0;
}
