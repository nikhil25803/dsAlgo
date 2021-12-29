#include<iostream>
using namespace std;

int main()
{
  int x,y;
  double f;
  cout<<"Enter the lower range: ";
  cin>>x;

  cout<<"Enter the upper range: ";
  cin>>y;

  while(x<=y)
  {
    f=x*9/5+32;
    cout<<"Farenheit value corresponding to "<<x<<" degree celcius is "<<f<<endl;
    x+=1;
  }

  return 0;
}
