//week09-2.cpp
// LeetCode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 先掃,先把所有值為0,而且紀錄它空的是哪一行
        int M = matrix.size(), N = matrix[0].size();
        vector<bool> markI(M), markJ(N); // 最開始 都沒
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) { // 一步一步
                if (matrix[i][j]==0) { // 看到,記下
                    markI[i] = true; // 把第i行記號
                    markJ[j] = true; // 第j列記下
                }
            }
        }
        // 再把,已經記下來的位置,已經為markI[i]、有markJ[j],都變成0
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (markI[i]==true || markJ[j]==true) matrix[i][j] = 0;
            }
        }
    }
};
