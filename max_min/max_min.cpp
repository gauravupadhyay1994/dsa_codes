#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNo = max(arr[i], maxNo);
        minNo = min(arr[i], minNo);
    }
    cout << "Maximum value is " << maxNo << endl;
    cout << "Minimum value is " << minNo << endl;
}
