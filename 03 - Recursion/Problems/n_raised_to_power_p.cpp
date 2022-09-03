#include<iostream>
using namespace std;

int power(int n, int p){
  if(p==0){
    return 1;
  }

  int lastPower = power(n, p-1);
  return n*lastPower;

}
int main()
{
  int x, y;
  cout<<"Enter the base and the exponential value: "<<endl;
  cin>>x>>y;
  int ans = power(x, y);
  cout<<"Answer is: "<<ans<<endl;

  return 0;
}
