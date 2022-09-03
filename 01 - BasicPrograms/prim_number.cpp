#include <iostream>
using namespace std;

int main()
{
  int x,y;
  cout<<"Enter the lower range: ";
  cin>>x;

  cout<<"Enter the upper range: ";
  cin>>y;

  cout<<"Prime number between "<<x<<" and "<<y<<" are: "<<endl;

  for(int i=x;i<=y;i++)
  {
    for(int j=2;j<i;j++)
    {
      if(i%j!=0)
      {
        cout<<i<<" ";
      }
      else
      {
        break;
      }

    }

  }

  return 0;
}
