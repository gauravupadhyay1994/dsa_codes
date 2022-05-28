#include <bits/stdc++.h>

using namespace std;

void increment(int *a)
{
    (*a)++;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    increment(&a);
    cout << a << endl;
    return 0;
}