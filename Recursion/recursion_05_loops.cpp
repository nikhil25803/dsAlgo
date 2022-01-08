#include <iostream>
using namespace std;

int recur(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    recur(n-1);
  }
  return 0;
}

int loops(int n)
{
  while(n!=0)
  {
    cout<<n<<endl;
    n--;
  }
  return 0;
}

int main()
{
  int x=5;
  cout<<"Result of recursion function: "<<endl;
  cout<<recur(x)<<endl;
  cout<<"Result of loops function: "<<endl;
  cout<<loops(x)<<endl;

  return 0;
}
