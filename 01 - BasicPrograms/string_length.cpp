#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cout<<"Enter the statement: ";
  getline(cin,str);
  int n=str.size();
  int count=0;

  for(int i=0;i<n;i++)
  {
      if(str[i]==' ')
      {
        continue;
      }
      else
      {
        count++;
      }
  }
  cout<<"The lenght of the string is: "<<count<<endl;

  return 0;
}
