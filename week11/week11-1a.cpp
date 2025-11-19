// week11-1a.cpp 挑戰題 二合一，先用(笨方法)寫一支
// LeetCode 2154. Keep Multiplying Found Values by Two
// 逐步倍增，把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (1) { // 用 while 迴圈一直做
            int found = 0; // 一開始預設沒找到
            for (int i=0; i<nums.size(); i++) { // 檢查 original 有沒有在 nums 裡
                if (nums[i] == original) found = 1; // 找到了
            }
            if (found==0) break; // 失敗，跳出迴圈
            else original = original * 2; // 有找到，變兩倍
        }
        return original;
    }
};

