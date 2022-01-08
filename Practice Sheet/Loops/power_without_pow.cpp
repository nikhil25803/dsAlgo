#include <iostream>
using namespace std;


int main()
{
  int n,p,ans=1;
  cout<<"Enter the base value: "<<endl;
  cin>>n;
  cout<<"Enter the exponential value: "<<endl;
  cin>>p;

  for(int i=1;i<=p;i++)
  {
    ans*=n;
  }
  cout<<"Answer is: "<<ans<<endl;

  return 0;
}
