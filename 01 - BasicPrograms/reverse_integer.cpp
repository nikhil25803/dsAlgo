#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  int i;
  int rev=0;
  while(n>0)
  {
    i=n%10;
    rev=(rev*10)+i;
    n=n/10;

  }
  cout<<"Reversed number is: "<<rev<<endl;

  return 0;
}
