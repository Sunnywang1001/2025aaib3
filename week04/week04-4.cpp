// week04-4.cpp
// LeetCode 練習題第10題 896. Monotonic Array
// 只允許 int or 只遞增 的陣列，不可以「又有增、又有減」
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0; // 如果有遞增 up變成1，如果有遞減 down變成1
        for(int i=1; i<nums.size(); i++){ // 從第1位開始
            if(nums[i-1] < nums[i]) up = 1;   // 左大 → 右小，增加
            if(nums[i-1] > nums[i]) down = 1; // 左大 → 右小，減少
        }
        if(up==1 && down==1) return false; // 不可又增加又減少
        return true;
    }
};
