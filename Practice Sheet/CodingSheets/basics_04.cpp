#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int temp = a>b? a:b;
    int largest = c>temp?c:temp;
    cout<<largest<<endl;

    return 0;
}