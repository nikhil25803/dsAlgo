#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
  if(i==n)
  {
    return -1;
  }
  if(arr[i]==key)
  {
    return i;
  }

  return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[], int n, int i, int key)
{
  int restArr = lastocc(arr, n, i+1, key);
  if(restArr != -1)
  {
    return restArr;
  }
  if(arr[i]==key)
  {
    return i;
  }
  return -1;
}

int main()
{
  int arr[] = {4,2,4,3,2,1,5};
  cout<<firstocc(arr, 7, 0, 3)<<lastocc(arr,7,0,3)<<endl;


  return 0;
}
