#include <iostream>
using namespace std;


int main()
{
  int a=10;
  int *p=&a; //pointer
  int **q=&p;//pointer to pointer

  //Next three line will print the address of a
  cout<<&a<<endl;
  cout<<p<<endl;
  cout<<*q<<endl;


  //Next two statements will print address of p
  cout<<&p<<endl;
  cout<<q<<endl;

  //Next three statement will print address of a
  cout<<a<<endl;
  cout<<*p<<endl;
  cout<<**q<<endl;


  return 0;
}
