/// week06-1.cpp
///LeetCode 學習筆記 第242題 Valid Anagram
///給定兩個字串 s, t，請判斷它們的用詞是否相同(可調順序)

class Solution {
public:
    bool isAnagram(string s, string t) {
        // 先看字母數是否相同
        if (s.length() != t.length()) return false; // 不同，肯定直接false

        // 先把字串 s 的字母統計一下
        int R[26] = {0}; // 建立一個「回收桶」Recycle收集桶，用於統計字母的字母分布
        for (int i = 0; i < s.length(); i++) {
            char c = s[i] - 'a'; // 將字元轉成 0~25 對應數字
            R[c]++;              // 將對應的桶子加1
        }

        // 再看字串 t 的字母，看看有沒有對應 - 削減掉 (不能再用就不是anagram)
        for (int i = 0; i < t.length(); i++) {
            char c = t[i] - 'a';
            R[c]--;              // 將桶子減1
            if (R[c] < 0) return false; // 不夠用，代表不相符
        }

        return true;
    }
};

