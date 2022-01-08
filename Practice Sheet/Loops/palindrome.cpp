#include <iostream>
using namespace std;


int main()
{
  int n;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  int temp=n;

  int sum=0;
  while(n!=0)
  {
    int i=n%10;
    sum=(sum*10)+i;
    n/=10;
  }
  if(temp<0)
  {
    if(temp==(sum))
    {
      cout<<"True"<<endl;
    }
    else
    {
      cout<<"False"<<endl;
    }
  }
  else
  {
    if(temp==sum)
    {
      cout<<"True"<<endl;
    }
    else
    {
      cout<<"False"<<endl;
    }
  }

  return 0;
}
