#include <iostream>
using namespace std;

int main()
{
  int a=4;
  int b=6;

  cout<<"a & b "<<(a&b)<<endl;
  cout<<"a | b "<<(a|b)<<endl;
  cout<<"~a "<< (~a)<<endl;
  cout<<"a^b "<<(a^b)<<endl;

  //Left Shift and Right shift Operators

  cout<<"a<<2 shifting a by 2 left shifts "<<(a<<2)<<endl;
  cout<<"b>>2 shifting b by 2 right shifts "<<(b>>2)<<endl;

  return 0;
}
