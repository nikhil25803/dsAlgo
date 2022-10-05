#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    int sumOdd = 0;
    int sumEven = 0;

    while (n > 0)
    {
        i = n % 10;
        if (i % 2 != 0)
        {
            sumOdd += i;
        }
        else
        {
            sumEven += i;
        }
        n = n / 10;
    }

    cout << sumOdd << " " << sumEven << endl;

    return 0;
}