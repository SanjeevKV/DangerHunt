#include <bits/stdc++.h>

using namespace std;

struct FenwickTree
{
    vector<int> bit, bit_xor, bit_and, bit_or, data;
    int n;
    FenwickTree(int n)
    {
        this->n = n;
        bit.assign(n, 0);
        bit_xor.assign(n, 0);
        bit_or.assign(n, 0);
        bit_and.assign(n, INT_MAX);
        data.assign(n, 0);
    }
    FenwickTree(vector<int> vec) : FenwickTree(vec.size())
    {
        for (int i = 0; i < n; i++)
            add(i, vec[i]);
    }
    //Keep changing all the trailing 0s to 1s
    void add(int idx, int val)
    {
        data[idx] = val;
        for (; idx < n; idx |= (idx + 1))
        {
            bit[idx] += val;
            bit_xor[idx] ^= val;
            bit_and[idx] &= val;
            bit_or[idx] |= val;
        }
    }

    void update(int idx, int val)
    {
        bit_xor[idx] ^= data[idx];
        bit_and[idx] ^= ~data[idx];
        bit_or[idx] ^= data[idx];
        for (; idx < n; idx |= (idx + 1))
        {
            bit_xor[idx] ^= val;
            bit_and[idx] &= val;
            bit_or[idx] |= val;
        }
    }
    //g(i) - Make all the trailing 1s to 0s. r = g(i) - 1
    int sum(int r)
    {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }
    int range_sum(int l, int r)
    {
        int r_sum, l_sum;
        r_sum = sum(r);
        l_sum = sum(l - 1);
        return r_sum - l_sum;
    }
};

int main()
{

    return 0;
}