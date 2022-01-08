#include <iostream>
using namespace std;


int main()
{
  int x,y,i;
  bool prime=true;

  cout<<"Enter lower level: "<<endl;
  cin>>x;
  cout<<"Enter upper level: "<<endl;
  cin>>y;

  while(x<y)
  {
    prime=true;
    if(i==0 || i==1)
    {
      prime=false;
    }
    else
    {
      for(int i=2;i<=x/2;i++)
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
