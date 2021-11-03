#include <bits/stdc++.h>
using namespace std;

void permute(int i, int n, vector<int> &p, vector<bool> &choose)
{
    if (i == n)
    {
        for (int j : p)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        if (choose[j])
            continue;
        choose[j] = true;
        p.push_back(j);
        permute(i + 1, n, p, choose); //We never increase the value of i in the current loop. Only increase it while calling another permute
        p.pop_back();
        choose[j] = false;
    }
}

int main()
{
    int n;
    vector<int> p;
    cin >> n;
    vector<bool> choose(n);
    permute(0, n, p, choose);
}