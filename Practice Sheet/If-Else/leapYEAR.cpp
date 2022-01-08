#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a year: "<<endl;
  cin>>n;

  if(n%100==0)
  {
    n/=100;
    if(n%4==0)
    {
      cout<<"It is a Leap Year"<<endl;
    }
    else
    {
      cout<<"It is not a a leap year"<<endl;
    }
  }
  else if(n%4==0)
  {
    cout<<"It is a leap year"<<endl;
  }
  else
  {
    cout<<"It is nota leap year"<<endl;
  }

  return 0;
}
