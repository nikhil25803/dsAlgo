#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<string> q;

  q.push("Hello");
  q.push("Code");
  q.push("World");

  cout<<"Size before: "<<q.size()<<endl;

  cout<<"Forst element: "<<q.front()<<endl;
  q.pop();
  cout<<"First element after pop: "<<q.front()<<endl;

  cout<<"Size after pop: "<<q.size()<<endl;

  return 0;
}
