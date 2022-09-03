#include <iostream>
using namespace std;

int main()
{
  int a=3; //a=3 is valid throughout the code untill it gets re-assigned

  cout<<a<<endl;

  if(true)
  {
    int a=5; // a=5 is valid in "if" block only
    cout<<a<<endl;
  }

  cout<<a<<endl;

  return 0;
}
