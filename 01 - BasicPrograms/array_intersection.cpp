#include <iostream>
using namespace std;


int main()
{
  int i,j,ans=0;
  int arr1[5]={1,2,3,4,5};
  int arr2[5]={5,6,7,8,9};

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if(arr1[i]==arr2[j])
      {
        ans=arr1[i];
        break;
      }
      else
      {
        break;
      }
    }
  }
  cout<<"Common element is : "<<ans<<endl;


  return 0;
}
