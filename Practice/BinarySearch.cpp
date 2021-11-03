#include "bits/stdc++.h"
using namespace std;

void bin_search(vector<int> &arr, int l, int r, int val)
{
  while (l <= r)
  {
    int m = (l + r) / 2;
    if (arr[m] == val)
    {
      cout << "Value found\n";
      return;
    }
    else if (arr[m] < val)
    {
      cout << "Mid value is lesser than value\n";
      l = m + 1;
    }
    else
    {
      cout << "Mid value is greater than the value\n";
      r = m - 1;
    }
  }
  cout << "Value not found\n";
}

int main()
{
  vector<int> arr = {1, 3, 5, 6, 7, 9, 10, 15, 20, 50};
  bin_search(arr, 0, 10, 4);
}