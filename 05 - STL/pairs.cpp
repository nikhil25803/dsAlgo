#include <iostream>
using namespace std;
int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pr = {1, {1, 2}};
    cout << pr.first<<" "<<pr.second.first<<" "<<pr.second.second<<endl;
    return 0;
}