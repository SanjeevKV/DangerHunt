#include <bits/stdc++.h>

using namespace std;

void printSets(int i, int n, vector<int> &v)
{
    if (i == n)
    {
        for (int j : v)
        {
            cout << j << " ";
        }
        cout << endl;
        return;
    }
    printSets(i + 1, n, v);
    v.push_back(i);
    printSets(i + 1, n, v);
    v.pop_back(); //We need to send the vector back to the caller in the same state as it came
                  //If it's not pass by reference, however, we could ignore the pop - Though I don't think it's a good practice
}
int main()
{
    int n;
    vector<int> v;
    cin >> n;
    printSets(0, n, v);
}