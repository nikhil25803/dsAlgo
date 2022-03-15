#include <iostream>
using namespace std;

int main()
{
  string color, pluralNoun, celebrity;

  cout<<"Enter a colour: "<<endl;
  getline(cin, color);

  cout<<"Enter the plural noun: "<<endl;
  getline(cin, pluralNoun);

  cout<<"Enter a celebrity: "<<endl;
  getline(cin, celebrity);

  cout<<"Roses are "<<color<<endl;
  cout<<pluralNoun<<" are Blue"<<endl;
  cout<<"I love "<<celebrity<<endl;


  return 0;
}
