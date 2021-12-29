#include <iostream>
#include <math.h>
using namespace std;


//To Count number of digits
int count(int n)
{
  int i;
  int counter=0;
  while(n!=0)
  {

    i=n%10;
    counter+=1;
    n/=10;
  }
  return counter;
}
// Reverse an integer

int rev(int n)
{
  int i;
  int sum=0;
  while(n!=0)
  {
    i=n%10;
    sum=(sum*10)+i;
    n/=10;
  }
  return sum;
}

int main()
{
  int x,y;
  cout<<"Enter the Lower range: ";
  cin>>x;
  cout<<"Ener the Upper range: ";
  cin>>y;

  for(int i=x;i<=y;i++)
  {
    int p;
    int l=count(i);
    // int temp1=i;
    int temp2=rev(i);
    int sum=0;
    p=i%10;
    sum=(sum*10)+pow(p,l);
    i/=10;

    if(temp2==sum)
    {
      cout<<sum<<endl;
    }
    else
    {
      continue;
    }

  }

  return 0;
}
