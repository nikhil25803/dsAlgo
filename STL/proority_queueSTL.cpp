#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int> maxi;


  priority_queue<int, vector<int>, greater<int>> mini;

 // Maximum
  maxi.push(1);
  maxi.push(3);
  maxi.push(5);
  maxi.push(9);

  int n=maxi.size();
  for(int i=0;i<n;i++)
  {
    cout<<maxi.top()<<" ";
    maxi.pop();
  }
  cout<<endl;

  //Minimum
mini.push(1);
mini.push(2);
mini.push(3);
mini.push(4);
mini.push(5);

int x=mini.size();
for(int i=0;i<x;i++)
{
  cout<<mini.top()<<" ";
  mini.pop();
}
cout<<endl;


  return 0;
}
