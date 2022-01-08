#include <iostream>
using namespace std;

int main()
{
  int n;
  float f;
  char ch;
  double d;
  cout<<"Enter a int, float, char and double value: ";
  cin>>n>>f>>ch>>d;

  cout<<" Size of int is: "<<sizeof(n)<<endl;
  cout<<" Size of float is: "<<sizeof(f)<<endl;
  cout<<" Size of char is: "<<sizeof(ch)<<endl;
  cout<<" Size of doubleb is: "<<sizeof(d)<<endl;


  return 0;

}
