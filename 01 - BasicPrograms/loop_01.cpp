#include<iostream>
using namespace std;

int main()
{
  int n,i=1,sum=0;
  cout<<"Enter a number n: ";
  cin>>n;

  while(i<=n)
  {
    sum+=i;
    i+=1;
  }

  cout<<"The sum of numbers till "<<n<< " is: "<<sum<<endl;

  return 0;
}
