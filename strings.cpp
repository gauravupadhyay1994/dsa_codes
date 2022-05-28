#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif
    string str = "987654123456";
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
    return 0;
}