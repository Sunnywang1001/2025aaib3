// week03-3a.cpp
// LeetCode 練習題 1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;  // 初始為 1，因為乘法單位元是 1

        // 注意：不能寫 ans = 0，因為一旦乘上 0，結果就永遠是 0 了
        for(int i = 0; i < nums.size(); i++) {
            ans *= nums[i];   // 把每個數字乘進去
        }

        // 判斷結果正負號
        if(ans > 0) return 1;
        if(ans < 0) return -1;
        return 0;
    }
};
