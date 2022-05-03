// https://leetcode.com/problems/merge-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        if (nums1.size() == 0)
            nums2 = nums1;

        int k = 0;
        for (int i = m; i < nums1.size(); i++)
            nums1[i] = nums2[k++];
        sort(nums1.begin(), nums1.end());
    }
};

class Solution2
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i, j, k;
        i = m - 1;
        j = n - 1;
        k = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
            {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
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