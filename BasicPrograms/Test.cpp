#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"Enter the value of a, b and c: ";
	cin>>a>>b>>c;
	cout<<"Expression looks like: "<<a<<"x^2 + "<<b<<"x +"<<c<<endl;

	int des;
	des = (b*b)-(4*a*c);
	if(des == 0){
		cout<<"Rppts of the equation are real and equal"<<endl;
		cout<<"Roots are: +-"<<b/(2*a)<<endl;
	}
	else if(des>0){
		cout<<"Roots are real and distinct"<<endl;
		cout<<"Roots are: "
	}

	return 0;
}
