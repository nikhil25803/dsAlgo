#include <iostream>
using namespace std;

int main()
{
  int b=1,c=0,a=0;
  int n;
  cout<<"Enter  a number n: "<<endl;
  cin>>n;
  int lim;
  cout<<"Enter the limit"<<endl;
  cin>>lim;

  cout<<"Fibonacci number till "<<n<<"th number is: "<<a<<" "<<b<<" ";
  for(int i=0;i<=n-3;++i)

  {
      c=a+b;
      a=b;
      b=c;

      if(c<=lim)
      {
        cout<<c<<" ";
      }
      else
      {
        break;
      }

  }

  return 0;
}
