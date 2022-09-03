#include <iostream>
using namespace std;

void dec(int n){
  if(n==0){   // Base Condition
    return;
  }
  cout<<n<<endl;
  dec(n-1);

}

void inc(int n){
  if(n==0){  // Base Condition
    return;
  }

  inc(n-1);

  cout<<n<<endl;
}

int main(){

  int n;
  cin>>n;

  dec(n);
  inc(n);


  // int n, i ,j;
  // cout<<"Enter the nth number: ";
  // cin>>n;
  //
  // for(i=2; i<n;i++)
  // {
  //   for(j=2;j<=i/2;j++)
  //   {
  //     if(i%j==0)
  //     {
  //       j = i;
  //       break;
  //     }
  //   }
  //   if(j != i)
  //   {
  //     cout<<i<<" ";
  //   }
  // }


  return 0;
}
