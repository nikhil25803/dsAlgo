#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Eter the number of rows: ";
  cin>>n;

  int i=n;
  while(i>=1)
  {
    int j=1;
    while(j<=i)
    {
      cout<<"*";
      j+=1;
    }


    cout<<endl;
    i-=1;
  }

  return 0;
}
