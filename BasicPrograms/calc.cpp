#include<iostream>
using namespace std;

int main()
{

  int num1, num2;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;

  int choice;
  cout<<"Enter your choice: \n1.Add\n2.Sub\n3.Mult\n4.Divide"<<endl;
  cin>>choice;

  switch(choice)
  {
    case 1:
    cout<<num1+num2<<endl;
    break;

    case 2:
    cout<<num1-num2<<endl;
    break;

    case 3:
    cout<<num1*num2<<endl;
    break;

    case 4:
    cout<<num1/num2<<endl;
    break;

    default: cout<<"Invalid"<<endl;
  }



  return 0;
}
