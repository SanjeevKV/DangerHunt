#include "bits/stdc++.h"

using namespace std;

int GCD(int a, int b)
{
    if (a > b)
        swap(a, b);

    if (!(b % a))
        return a;

    return GCD(b % a, a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}