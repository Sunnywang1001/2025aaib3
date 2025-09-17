// week02-4.cpp LeetCode學習計劃第2題
// 389. Find the Difference 找到2個字串中「差哪個字母」

class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};  // 可以用來儲存字母，大小為256，代表「一開始空的」

        for(int i = 0; i < s.length(); i++) {
            char c = s[i];  // 取出字母
            A[c]++;          // 把字母放入桶子裡
        }

        for(int i = 0; i < t.length(); i++) {
            char c = t[i];
            A[c]--;
            if(A[c] < 0) return c;  // 發現差的字母
        }

        return 0;  // 不會用到這一行啦
    }
};

