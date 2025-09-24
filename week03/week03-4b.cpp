// week03-4b.cpp 第 2 種寫法，成功!
// LeetCode 練習題第 6 題 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;  // 指標，用來記錄非零元素應該放的位置

        // 第一次迴圈：把非零元素依序搬到前面
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) nums[k++] = nums[i];
        }

        // 第二次迴圈：剩下的位置補 0
        for(int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
