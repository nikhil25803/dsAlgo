#include <iostream>
using namespace std;

int fib(int n){
  if(n==0 || n==1){ // Base Condition
    return n;
  }
  else if(n==2){n
    return 1;
  }

  return fib(n-1) + fib(n-2);
}

int main()
{
  // int b=0, c=1;
  int n;
  cout<<"Enter the nth Fibonacci number to get: ";
  cin>>n;
  //
  // for(int i=0;i<n-2;i++){
  //   int a = b;
  //   b = c;
  //   c = a+b;
  // }
  //
  // cout<<c<<endl;

  int ans = fib(n);
  cout<<"Nth fibonacci number is: "<<ans<<endl;

  return 0;
}
