#include <iostream>

using namespace std;

bool check(int n);
int prime(int n);

int main()
{
  int x;
  cout<<"Enter a number: ";
  cin>>x;
  prime(x);


  return 0;
}

int prime(int n)
{
  for(int i=2;i<n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      if(check(i)==true && check(j)==true)
      {
        if(i+j==n)
        {
          cout<<n<<" = "<<i<<" + "<<j<<endl;
        }
        else
        {
          continue;
        }
      }
    }
  }


}

bool check(int n)
{
  int prime=1;
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      prime=0;
      break;
    }
    if(prime==1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}
