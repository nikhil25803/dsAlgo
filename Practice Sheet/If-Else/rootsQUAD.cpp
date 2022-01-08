#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a,b,c;
  float d,x,y,real,im;

  cout<<"Enter the coefficient of x^2/x/and constant "<<endl;
  cin>>a>>b>>c;

  d=pow(b,2)-4*a*c;
  x=(-b+sqrt(d))/2*a;
  y=(-b-sqrt(d))/2*a;

  if(d>0)
  {
    cout<<"Roots of the quadratic equation are: "<<x<<" "<<y<<endl;
  }
  else if(d==0)
  {
    x=-b/(2*a);
    cout<<"Roots are equal with value: "<<x<<endl;
  }
  else
  {
      real=-b/(2*a);
      im=sqrt(-d)/(2*a);
      cout<<"Roots are: "<<endl;
      cout<<real<<" + "<<im<<"i"<<endl;
      cout<<real<<" - "<<im<<"i"<<endl;
  }
  return 0;
}
