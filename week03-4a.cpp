// week03-4a.cpp
// LeetCode 練習題第 6 題 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // 先用暫存陣列，把非零的數存起來

        // 第一次迴圈：把非零的數字收集起來
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) ans.push_back(nums[i]);
        }

        // 第二次迴圈：把收集到的數字放回原陣列，後面補 0
        for(int i = 0; i < nums.size(); i++) {
            if(i < ans.size()) nums[i] = ans[i]; // 前面放非零數字
            else nums[i] = 0;                    // 後面補 0
        }
    }
};
