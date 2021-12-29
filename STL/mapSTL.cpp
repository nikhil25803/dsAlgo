#include <iostream>
#include <map>

using namespace std;


int main()
{
  map<int,string> m;

  m[1]="Nikhil";
  m[2]="Raj";
  m[13]="Hello";
  // m[4]="World";
  m.insert({5,"World"});

  for(auto i:m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }

  return 0;
}
