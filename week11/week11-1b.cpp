// week11-1b.cpp  二合一 －  進階的方式，用到資料結構 HashMap or HashSet
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet; // HashSet 可以快速搜尋「有沒有這個數」
        for (int num : nums) numsSet.insert(num); // C++的建集合

        // 當前 original 有沒有在 numsSet 裡，有的話，變兩倍，重複做
        while ( numsSet.find(original) != numsSet.end() ) { // 有找到「有找到」
            original = original * 2;
        }
        return original;
    }
};
