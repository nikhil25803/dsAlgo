#include <iostream>
using namespace std;

void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void swap(int arr[],int size)
{
  for(int i=0;i<size;i+=2)
  {
    if(i+1<size)
    {
      swap(arr[i],arr[i+1]);
    }
  }
}


int main()
{
  int even[8]={5,2,9,4,7,6,1,0};
  int odd[5]={11,3,9,76,43};

  cout<<"For even array: "<<endl;
  swap(even,8);
  print(even,8);

  cout<<"For odd array: "<<endl;
  swap(odd,5);
  print(odd,5);

  return 0;
}
