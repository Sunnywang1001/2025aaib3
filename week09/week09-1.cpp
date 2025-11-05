// week09-1.cpp 學習主題 Matrix 矩陣 第1題 Easy題
// LeetCode 1672. Richest Customer Wealth
// j=0 1 2
// i=a 1 2 3
// i=1 3 2 1

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        // 有M 有N
        int ans = 0;
        for (int i=0; i<M; i++) { //在手1 個人 i 的存款
            int now = 0;
            for (int j=0; j<N; j++) { // 在手j 銀行 j
                now += accounts[i][j]; // 在 i手 j手
            } // 算到人，在第 j 個銀行存款的總和
            ans = max(ans, now); // 在所有裡面 最大值
        }
        return ans;
    }
};
