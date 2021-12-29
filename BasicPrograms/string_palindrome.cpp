#include <iostream>
#include <string>
using namespace std;

int main()
{
  string st;
  cout<<"Enter a string: ";
  getline(cin,st);
  int low=0;
  int high=st.size()-1;
  int flag=0;

  while(low<high)
  {
    if(st[low]!=st[high])
    {
      flag=1;
      break;
    }
    low++;
    high--;
  }

  if(flag==0)
  {
    cout<<"This is a palidrome string !"<<endl;
  }
  else
  {
    cout<<"This is not a palidrome string. "<<endl;
  }

  return 0;
}
