#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            cout << n << " is not a prime number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << n << " is a prime number" << endl;
    }
}