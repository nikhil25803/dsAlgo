#include <iostream>
using namespace std;

int main()
{
  int arr[]={3,2,1,6,4,5,9,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);

  for(int i=1;i<n;i++)
  {
    int curr = arr[i];
    int j=i-1;
    while(arr[j]>curr && j>=0)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=curr;
  }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
