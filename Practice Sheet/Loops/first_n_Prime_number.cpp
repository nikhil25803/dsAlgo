#include <iostream>
using namespace std;

int main()
{
  int x,y,i;
  bool prime=true;
  cout<<"Enter the lower limit: "<<endl;
  cin>>x;
  cout<<"Enter the upper limit: "<<endl;
  cin>>y;

  cout<<"Prime number between "<<x<<" and "<<y<<" is "<<endl;
  while(x<y)
  {
    prime=true;
    if(i==0 || i==1)
    {
      prime=false;
    }
    else
    {
      for(int i=2;i<=x/2;++i)
      {
        if(x%i==0)
        {
          prime=false;
          break;
        }
      }
    }
    if(prime)
    {
      cout<<x<<" ";
    }
    ++x;
  }

  return 0;
}
