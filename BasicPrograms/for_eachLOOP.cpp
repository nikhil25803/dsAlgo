#include <iostream>
#include <algorithm>
using namespace std;
int print_even(int n) {
    if (n % 2 == 0)
        cout << n << ' ';
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "The Array contains the following even numbers" << endl;
    for_each(arr, arr + 5, print_even);
    return 0;
}
