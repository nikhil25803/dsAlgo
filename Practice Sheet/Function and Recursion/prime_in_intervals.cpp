#include <iostream>

using namespace std;

void prime(int x , int y);

int main()
{
  int low,high;
  cout<<"Enter the lower range: ";
  cin>>low;
  cout<<"Enter the upper range: ";
  cin>>high;
  prime(low,high);

  return 0;
}

void prime(int x, int y)
{
  int flag;
  for(int i=x;i<=y;i++)
  {
    if(i==0 || i==1)
    {
      continue;
    }
    flag=1;
    for(int j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        flag=0;
        break;
      }

    }
    if(flag==1)
    {
      cout<<i<<" ";
    }
  }

}
