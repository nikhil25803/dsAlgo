#include <iostream>
using namespace std;

int main()
{
  int n1,n2;
  int c;
  char ch;
  do
{

  cout<<"Enter the first number: ";
  cin>>n1;

  cout<<"Enter the second number: ";
  cin>>n2;


  cout<<"CHOICES:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
  cin>>c;

  switch(c)
  {
    case 1:
    cout<<n1+n2<<endl;
    break;

    case 2:
    cout<<n1-n2<<endl;
    break;

    case 3:
    cout<<n1*n2<<endl;
    break;

    case 4:
    cout<<n1/n2<<endl;
    break;

    default: cout<<"Invalid Input"<<endl;;
  }
  cout<<"Do you want to continue: (y/n) ";
  fflush(stdin);
  cin>>ch;
}while(ch=='y' || ch=='Y');

  return 0;
}
