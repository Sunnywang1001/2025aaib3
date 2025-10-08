// week05-1.cpp
// LeetCode 學習題 Built-in Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // 把字串 string 當 iostream 的 cin 來用
        string word; // 字串
        // ss >> word; // 像是 cin >> word 一樣，現在的 ss 可以用 ss >> word
        // ss >> word; // 讀第二次，會讀到第二個字
        while (ss >> word) { // 一直讀，讀到不能讀為止
            // 這面什麼事都沒有做
        }
        cout << word; // 先做一個確認，看結果對
        return word.length(); // 最後，把長度送出去
    }
};
