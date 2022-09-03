#include<iostream>
using namespace std;

int main()
{
  int a,b;

  cout<<"Enter the first number: "<<endl;
  cin>>a;

  cout<<"Enter the second number: "<<endl;
  cin>>b;

  if(a>b)
  {
    cout<<a<<" is greater than "<<b;
  }
  else
  {
    cout<<b<<" is greater than "<<a;
  }

  return 0;
}
