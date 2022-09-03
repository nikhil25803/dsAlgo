#include <iostream>
using namespace std;

int main()
{
  int arr[]={1,2,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int counter=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      for(int k=i;k<=j;k++)
      {
        cout<<arr[k]<<" ";
      }
      cout<<"\n"<<endl;
    }
  }

  return 0;
}
