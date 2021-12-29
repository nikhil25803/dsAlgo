#include<iostream>
using namespace std;

int main()
{
  int n,i=2;
  cout<<"Enter the number: "
  cin>>n;

  while(i<n)
  {
    if(n%i==0)
    {
      cout<<"NOT Prime for "<<i<<endl;
    }
    else
    {
      cout<<"Prime for "<<i<<endl;
    }
    i+=1;
  }

  return 0;
}
