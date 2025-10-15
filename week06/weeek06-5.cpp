// week06-5.cpp  今天的LeetCode挑戰題，有點難
// 3350. Adjacent Increasing Subarrays Detection II
// 題目跟昨天的 3349 很像，昨天是回傳 bool，今天回傳「最大可相鄰長度」
// 3349 用 combo，今天 3350 用兩個 combo 左邊右邊，看看能多長
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();  // 先抓出長度

        vector<int> left(N, 1);  // 左邊的 combo
        vector<int> right(N, 1); // 右邊的 combo

        for (int i = 1; i < N; i++) { // 走訪由左往右 combo 往一邊
            if (nums[i - 1] < nums[i]) left[i] = left[i - 1] + 1;
        }

        for (int i = N - 2; i >= 0; i--) { // 由右往左 combo 往左一邊
            if (nums[i] < nums[i + 1]) right[i] = right[i + 1] + 1;
        }

        int ans = 0;
        for (int i = 0; i < N - 1; i++) {
            int now = min(left[i], right[i + 1]);
            if (now > ans) ans = now;
        }

        return ans;
    }
};
