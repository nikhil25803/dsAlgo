#include <iostream>
using namespace std;

int pow(int m,int n)
{
  if(n==0)
  {
    return 1;
  }
  return pow(m,n-1)*m ;
}

// Function with less number of multiplication

int pow2(int m,int n)
{
  if(n==0)
  {
    return 1;
  }

  else if((n%2==0))
  {
    return pow2(m*m,n/2);
  }
  else
  {
    return m*pow(m*m,(n-1)/2);
  }
}

int main()
{
  int m,n;
  cout<<"Enter the base and the exponent value: ";
  cin>>m>>n;
  cout<<"Answer is: "<<pow(m,n)<<endl;
  cout<<"Anser using second function is: "<<pow2(m,n)<<endl;

  //Using Loops
  int power=1;
  for(int i=0;i<n;i++)
  {
    power*=m;
  }
  cout<<"Answer using loops is: "<<power<<endl;


  return 0;
}
