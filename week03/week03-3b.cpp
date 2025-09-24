// week03-3b.cpp 二合一
// LeetCode 練習題 1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // 初始為 1，代表正號

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) ans *= +1;   // 正數不改變符號
            if(nums[i] < 0) ans *= -1;   // 負數翻轉符號
            if(nums[i] == 0) ans = 0;    // 一旦遇到 0，乘積一定是 0
        }

        if(ans > 0) return 1;
        if(ans < 0) return -1;
        return 0;
    }
};
