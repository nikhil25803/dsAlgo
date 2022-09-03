#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cout<<"Enter the string: ";
  getline(cin,str);
  int n=str.size();

  cout<<"Reversed array is: "<<endl;
  for(int i=0,j=n-1;i<n/2;i++,j--)
  {
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
  cout<<str<<endl;

  return 0;
}
