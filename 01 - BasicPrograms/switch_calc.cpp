#include <iostream>
using namespace std;

int main()
{
  char ch;
  do
  {
  int x,y;
  cout<<"Enter the first number: ";
  cin>>x;
  cout<<"Enter the second number: ";
  cin>>y;


  cout<<"Operations: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
  int n;
  cout<<"Enter your preference: ";
  cin>>n;

  switch(n)
  {
    case 1: cout<<x+y<<endl;
    break;

    case 2:cout<<x-y<<endl;
    break;

    case 3: cout<<x*y<<endl;
    break;

    case 4: cout<<x/y<<endl;
    break;

    default: cout<<"Invalid Input"<<endl;
  }
  cout<<"Do you want to continue? [y/n]"<<endl;
  fflush(stdin);
  cin>>ch;
}while(ch=='y' || ch=='Y');

  return 0;
}
