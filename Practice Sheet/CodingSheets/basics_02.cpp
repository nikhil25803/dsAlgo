#include<iostream>
using namespace std;

int main() {
    int a;
    float b;
    double c;
    char d;

    cout<<"Enter the respective values: ";
    cin>>a>>b>>c>>d;
    cout<<"Size of each data type is: ";
    cout<<sizeof(a)<<"\n"<<sizeof(b)<<"\n"<<sizeof(c)<<"\n"<<sizeof(d)<<endl;

    return 0;
}