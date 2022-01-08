#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a number: "<<endl;
  cin>>n;

  int sum=0;
  while(n!=0)
  {
    int i=n%10;
    sum=(sum*10)+i;
    n/=10;
  }
  cout<<"Reversed number is: "<<sum;

  return 0;
}
