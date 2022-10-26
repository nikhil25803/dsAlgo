#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // int stars = (n / 2) - 1 + i, spaces = 2 * (i - 1);
        for (int j = 1; j <= n - i+1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Reverse the pattern

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}