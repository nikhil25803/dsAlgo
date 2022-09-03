#include <iostream>
using namespace std;

int main()
{
  int arr[]={1,3,2,4,6,5,8,7,9};
  int n=sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[i])
      {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
