#include <iostream>
using namespace std;

void TOH(int n,int a, int b, int c)
{
  if(n>0)
  {
    TOH(n-1,a,c,b);
    cout<<a<<" to "<<c<<endl;
    TOH(n-1,b,a,c);
  }
}

int main()
{
  int n,a,b,c;
  cout<<"Enter the value of n, a, b and c : ";
  cin>>n>>a>>b>>c;
  TOH(n,a,b,c);

  return 0;
}
