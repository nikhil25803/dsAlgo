#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  if(n%2==0)
  {
    goto even;
  }
  else
  {
    goto odd;
  }

  even:
    cout<<"Even Number"<<endl;
    return 0;

  odd:
    cout<<"Odd Number"<<endl;
    return 0;




  return 0;
}
