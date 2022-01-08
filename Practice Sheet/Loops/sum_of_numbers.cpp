#include <iostream>
using namespace std;

int main()
{
  int n,sum=0;
  cout<<"Enter a number: "<<endl;
  cin>>n;

  for(int i=0;i<=n;++i)
  {
    sum+=i;
  }
  cout<<"Sum of the number till "<<n<<" is "<<sum;

  return 0;
}
