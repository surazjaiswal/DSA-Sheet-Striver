// https://www.interviewbit.com/problems/repeat-and-missing-number-array/

#include <bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(vector<int> &A)
{

    int n = A.size();
    vector<int> nums(n + 1, 0);

    for (int i : A)
    {
        nums[i]++;
    }

    int a, b;
    for (int i = 1; i <= n; i++)
    {
        if (nums[i] == 2)
        {
            a = i;
        }
        if (nums[i] == 0)
        {
            b = i;
        }
    }

    return {a, b};
}

int main()
{

    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    return 0;
}