#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void towerOfHanoi(int num, char src, char helper, char dest)
{
    if (num == 0)
        return;
    towerOfHanoi(num - 1, src, dest, helper);
    cout << "Moving from " << src << " to"
         << " dest" << endl;
    towerOfHanoi(num - 1, helper, dest, src);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif

    int n = 4;
    towerOfHanoi(n, 'A', 'B', 'C');
}