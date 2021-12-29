#include <iostream>
using namespace std;

int main()
{
  char num='A';
  cout<<"Start"<<endl;
  switch(num)
  {
    case '1': cout<<"First"<<endl;
    break;

    case 'B': cout<<"Second"<<endl;
    break;

    case 'C': cout<<"Third"<<endl;
    break;

    case 'D': cout<<"Fourth"<<endl;
    break;

    case 'E': cout<<"Fifth"<<endl;
    break;

    default: cout<<"Default"<<endl;

  }



  return 0;
}
