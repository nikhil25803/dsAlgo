#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n,p;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  cout<<"Enter the exponential value: "<<endl;
  cin>>p;

  for(int i=1;i<=n;i++)
  {
    cout<<i<<" to the power "<<p<<" is "<<pow(i,p)<<"."<<endl;
  }

  return 0;
}
