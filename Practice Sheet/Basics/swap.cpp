#include <iostream>
using namespace std;

int main()
{
  int x,y;
  cout<<"Enter the value of x and y"<<endl;
  cin>>x>>y;

  y=x+y;
  x=y-x;
  y=y-x;

  cout<<"Swapped value of x and y is: "<<x<<" "<<y<<endl;

  return 0;
}
