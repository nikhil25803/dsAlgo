#include <iostream>
using namespace std;

int sum(int n)
{
  // int sum2=0;
  if(n==0)
  {
    return 0;
  }

  return n+sum(n-1);
}


int main()
{
  int n;
  cout<<"Enter the number: "<<endl;
  cin>>n;

  int ans = sum(n);
  cout<<ans<<endl;


  //USing Loops [ Better Choice ]
  int sum=0;
  for(int i=n;i>0;i--)
  {
    sum+=i;
  }

  cout<<"Using loops answer is: "<<sum<<endl;
  return 0;
}
