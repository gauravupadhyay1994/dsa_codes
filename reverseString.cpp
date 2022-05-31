#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverse(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif

    string str = "gaurav";
    reverse(str);
}