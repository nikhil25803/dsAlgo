#include <iostream>
using namespace std;


int fun(int n)
{
  if(n>100)
  {
    return n-10;
  }
  else
  {
    return fun(fun(n+11));
  }

  return 0;
}

int main()
{
  int r;
  r= fun(95);
  cout<<r<<endl;
  fun(95);

  return 0;
}
