// max_subArray_sum

#include <iostream>

using namespace std;

int kadane(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\practice_code\\input.txt", "r", stdin);
    freopen("D:\\practice_code\\output.txt", "w", stdout);
#endif
    int n, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int nonwrap = kadane(arr, n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = -arr[i];
    }
    int signReverseKadane = kadane(arr, n);
    int wrap = sum + signReverseKadane;
    cout << max(wrap, nonwrap) << endl;
}