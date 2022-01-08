#include <iostream>
#include <math.h>
using namespace std;

void binary(int n);
void decimal(int n);

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  binary(n);

  int x;
  cout<<"\nEnter a binary number: ";
  cin>>x;
  decimal(x);

  return 0;
}

void binary(int n)
{
  int r;
  while(n!=0)
  {
    r=n%2;
    cout<<r<<" ";
    n/=2;
  }
}

void decimal(int n)
{
  int temp=n;
  int count =0;
  while(n!=0)
  {
    n=n%10;
    count++;
    n/=10;
  }

  int ans=0;
  int i=0;
  while(temp!=0)
  {
    // i++;
    int r=temp%10;
    ans=ans+r*(pow(2,i));
    i++;
    temp/=10;
  }
  cout<<ans<<endl;

}
