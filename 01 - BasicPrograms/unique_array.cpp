#include <iostream>
using namespace std;

int main()
{
  int arr[5]={2,1,3,2,3};
  unique=arr[0];
  for(int i=0;i<5;i++)
  {
    if(arr[i]!=arr[i+1])
    {
      unique=arr[i];
    }
    else
    {
      continue;
    }
  }
  cout<<"Unique element is: "<<arr[i];

  return 0;
}
