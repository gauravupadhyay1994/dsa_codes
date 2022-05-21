#include <iostream>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is greatest with value " << a << endl;
        }
        else
        {
            cout << "C is greatest with value " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is greatest with value " << b << endl;
        }
        else
        {
            cout << "C is greatest with value " << c << endl;
        }
    }
}