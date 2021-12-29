#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int sum;
  cout<<"Enter the sum value: "<<endl;
  cin>>sum;

  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]+arr[j]==sum)
      {
        count++;
      }
      else
      {
        continue;
      }
    }
  }
  cout<<"Count of value  pair sum is: "<<count<<endl;

  return 0;
}
