// week06-4.cpp  昨天的LeetCode簡單題
// nums 陣列裡，數字身會增加。請問有沒有2個相鄰的子序列，裡面都是遞增?
// ex. 2,5,7,8,9,2,3,4,3,1
// combo 1 2 3 4 5 沒有比對大，執行不會再增加，用原來的值1

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // 先用動態規劃先產出 combo 遞增
        int N = nums.size(); // 先抓出陣列大小
        vector<int> combo(N, 1); // 分配，裡面都放 原來的值1

        for (int i = 1; i < N; i++) {
            // 如果 nums[i-1] < nums[i]，代表是遞增
            if (nums[i - 1] < nums[i]) combo[i] = combo[i - 1] + 1;
        }

        // 接著要看有沒有兩個長度>=k的區間，combo值相鄰不斷遞增
        for (int i = 0; i < N - k; i++) {
            if (combo[i] >= k && combo[i + k] >= k) return true;
        }

        return false;
    }
};
