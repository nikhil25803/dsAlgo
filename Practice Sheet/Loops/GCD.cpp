#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter two numbers: "<<endl;
  cin>>a>>b;

  for(int i=2;i<=a;i++)
  {
    if((a%i==0) && (b%i==0))
    {
      cout<<i<<endl;
    }
  }


  return 0;
}
