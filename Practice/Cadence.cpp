#include <bits/stdc++.h>

using namespace std;

int Cadence(int *arr, int n)
{
    int sum = 0, best = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(sum, best);
    }
    return best;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Cadence(arr, n);
    return 0;
}