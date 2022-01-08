#include <iostream>
#include <math.h>
using namespace std;

int count(int n)
{
  int counter=0;
  while(n!=0)
  {
    n/=10;
    counter+=1;
  }
  return counter;
}

int main()
{
  int n,i;
  cout<<"Enter a number: "<<endl;
  cin>>n;
  int temp=n;
  int len=count(n);

  cout<<"Length is: "<<len<<endl;

  int rev=0;
  while(n>0)
  {
    i=n%10;
    rev=rev+(pow(i,len));
    n/=10;
  }
  cout<<"Armstrong value is: "<<rev<<endl;

  if(temp==rev)
  {
    cout<<"Yes! it is a armstrong number."<<endl;
  }
  else
  {
    cout<<"No! it is not a armstrong number."<<endl;
  }

  return 0;
}
