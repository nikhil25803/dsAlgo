#include <iostream>
using namespace std;

void tail(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    tail(n-1);
  }
  // return 0;
}

void head(int n)
{
  if(n>0)
  {
    head(n-1);
    cout<<n<<endl;
  }
}

int main()
{
  int n=10;
  cout<<"Tail recursion result is: "<<endl;
  tail(n);
  cout<<"Head recursion result is: "<<endl;
  head(n-1);

  return 0;
}
