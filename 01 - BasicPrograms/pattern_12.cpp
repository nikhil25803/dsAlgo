#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int i=1;
  while(i<=n)
  {
    int j=1;
    while(j<=n-i)
    {
      cout<<" ";
      j+=1;
    }
    int k=1;
    while(k<=i)
    {
      cout<<"*";
      k+=1;
    }
    cout<<endl;
    i+=1;
  }

  return 0;
}
