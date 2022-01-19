#include <iostream>
using namespace std;

void tree(int n) //Calling function more than one time
{
  if(n>0)
  {
    cout<<n<<endl;
    tree(n-1);
    // cout<<n<<endl;
    tree(n-1);
  }
}

int main()
{
  int n=3;
  tree(n);
  return 0;
}
