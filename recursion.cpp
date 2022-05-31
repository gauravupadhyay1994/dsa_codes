#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printNumDec(int num)
{
    if (num == 0)
        return;
    cout << num << endl;
    printNumDec(num - 1);
}

void printNumInc(int num)
{
    if (num == 0)
        return;
    printNumInc(num - 1);
    cout << num << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif

    int a = 4;
    printNumDec(a);
    printNumInc(a);
}