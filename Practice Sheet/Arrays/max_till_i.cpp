#include <iostream>
using namespace std;

int main()
{
  int arr[]={3,2,1,6,4,5,19,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);

  int max=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }

  cout<<"The maximum element of the array is: "<<max<<endl;

  return 0;
}
