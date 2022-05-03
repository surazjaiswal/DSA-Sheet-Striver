// https://leetcode.com/problems/find-the-duplicate-number/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] < 0)
                return abs(nums[i]);
            nums[idx] *= -1;
        }
        return -1;
    }
};

int main()
{

    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    return 0;
}