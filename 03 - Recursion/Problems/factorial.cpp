#include <iostream>
using namespace std;

int fact(int n){
  if(n==0){
    return 1;
  }

  int ans = fact(n-1);
  return n*ans;


}

int main()
{
  int n;
  cout<<"Enter the number: "<<endl;
  cin>>n;
  int answer = fact(n);
  cout<<"Factorial of the given number is: "<<answer<<endl;


  return 0;
}
