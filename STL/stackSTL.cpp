#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<string> s;

  s.push("Nikhil");
  s.push("Raj");
  s.push("is");
  s.push("Good");

  cout<<s.top()<<endl;
  return 0;
}
