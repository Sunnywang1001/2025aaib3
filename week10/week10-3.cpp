// week10-3.cpp 學習計畫 Matrix 第3題 (上屆AT寫過, 本週再寫一次)
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) { // 依照螺旋的方式, 逐項掃描, 收集資料
        int N = matrix.size(), M = matrix[0].size();
        int top=0, bottom=N-1, left=0, right=M-1; // 我們的上下左右的界線
        vector<int> ans;
        while (top<=bottom && left<=right) {
            for (int j=left; j<=right; j++) ans.push_back(matrix[top][j]); // 先上排, 在左上 top++
            top++;

            for (int i=top; i<=bottom; i++) ans.push_back(matrix[i][right]); // 再右列, 在右上 right--
            right--;

            if (top>bottom || left>right) break; // 有可能掃完就結束

            for (int j=right; j>=left; j--) ans.push_back(matrix[bottom][j]); // 再下排, 在左下 bottom--
            bottom--;

            for (int i=bottom; i>=top; i--) ans.push_back(matrix[i][left]); // 最後左列, 在左上 left++
            left++;
        }
        return ans;
    }
};
