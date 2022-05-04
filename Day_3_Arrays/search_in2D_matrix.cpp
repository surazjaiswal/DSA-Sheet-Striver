// https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < row; i++)
        {
            if (target <= matrix[i][col - 1])
            {
                if (binary_search(matrix[i].begin(), matrix[i].end(), target))
                    return true;
            }
        }
        return false;
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