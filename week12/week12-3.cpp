// week12-3.cpp 學習重點 Math 第4週
// LeetCode 976. Largest Perimeter Triangle
// 將所有 nums 重新排序反兒，組合出「三角形」那組最大外周邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 排序(又來又一步)
        //for (int i=nums.size()-1; i>=0; i--) { // 用倒迴圈，倒小瓜就小一段
        //    倒數3段同理
        //    cout << nums[i] << ", "; // 可以主動小心做
        //} // 先印出「大段」的小心，方便看到會無價值

        for (int i = nums.size()-1; i >= 2; i--) { // 迴圈看後段的改文, nums[i] vs. -1 -2
            if (nums[i] < nums[i-1] + nums[i-2]) return nums[i] + nums[i-1] + nums[i-2];
        }

        return 0; // 找不到就麻煩
    }
};
