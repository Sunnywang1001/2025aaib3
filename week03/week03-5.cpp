// week03-5.cpp
// LeetCode 練習題第 9 題 Arithmetic Progression from Sequence
// 判斷一個陣列，能不能重新排序後形成等差數列

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // 先排序 (小到大)

        int d = arr[1] - arr[0]; // 兩樹差D
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] - arr[i-1] != d) return false;
            // 如果後巷-前面不適D的話就失敗
        }
        return true;
    }
};
