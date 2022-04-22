#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int dp[35][35];
    vector<vector<int>> generate(int numRows) {
        memset(dp,-1,sizeof(dp));
        int n=numRows;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> vt;
            for(int j=0;j<=i;j++){
                vt.push_back(nCr(i,j));
            }
            ans.push_back(vt);
        }
        
        return ans;
    }
    
    int nCr(int n, int r){
        if(r==0 || r==n)
            return 1;
        if(r==1 || n-r==1)
            return n;
        if(dp[n][r]!=-1)
            return dp[n][r];
        return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
    }
};

class Solution2 {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> vt(i+1,1);
            ans.push_back(vt);
            for(int j=1;j<i;j++)
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
        return ans;
    }
};   

int main(){


    return 0;
}