//Sum of first n natural numbers
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  cout<<"Sum of natural numbers till "<<n<<" is: ";

  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;

  }
  cout<<sum;

  return 0;
}
