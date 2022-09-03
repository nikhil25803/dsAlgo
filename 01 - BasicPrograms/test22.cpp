#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
  cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[50];

	    if(n%2==0)
	    {
	        int i=0;
	        while(n!=1)
	        {

	           arr[i]=n;
	           n=n/2;
	           i++;
	        }
          int count=sizeof(arr)/sizeof(arr[0]);;

          cout<<count<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
