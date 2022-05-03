// https://leetcode.com/problems/merge-intervals/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int i = 0, j = 1;
        while (j < intervals.size())
        {
            if (ans[i][1] >= intervals[j][0])
            {
                ans[i][1] = max(ans[i][1], intervals[j][1]);
            }
            else
            {
                ans.push_back(intervals[j]);
                i++;
            }
            j++;
        }
        return ans;
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