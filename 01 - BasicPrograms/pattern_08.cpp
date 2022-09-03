#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int i=1;
  int x=1;
  while(i<=n)
  {
    int j=1;
    while(j<=i)
    {
      cout<<x<<" ";
      x+=1;
      j+=1;
    }
    cout<<endl;
    i+=1;
  }

  return 0;
}
