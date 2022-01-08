#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<int>v;
	while(t--)
	{
	   int a,b,c,ans;
	   cin>>a>>b>>c;
	   if((a>b && b<c) || (c>b && b>a))
	   {
	       ans=b;
	   }
	   else if((a>c && c>b) || (b>c && c>a))
	   {
	       ans=c;
	   }
	   else
	   {
	       ans=a;
	   }

	   cout<<ans<<endl;
	}
	return 0;
}
