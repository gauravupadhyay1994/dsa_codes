#include <bits/stdc++.h>

using namespace std;

bool pairSum(int arr[], int n, int value)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int sum = arr[low] + arr[high];
        if (sum == value)
        {
            return true;
        }
        else if (sum > value)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif
    int n, value;
    cin >> n >> value;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    bool check = pairSum(arr, n, value);
    cout << check << endl;
}