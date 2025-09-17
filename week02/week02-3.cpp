//week02-3.cpp leetcode學習計畫地1提
//1768
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(); //字串的長度
        int N2 = word2.length();
        string ans;
        for(int i=0; i<max(N1,N2);i++){
           if(i<N1) ans += word1[i];//把字母放入答案
            if(i<N2)ans += word2[i];//把字母放入答案
        }
        return ans;//答案傳出去結束
    }

};
