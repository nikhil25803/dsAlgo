#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int x)
{
  int count=0;
    while(x!=0)
    {
        if(x&1)
        {
            count+=1;
        }
        x=x>>1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
