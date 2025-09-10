//week01-1.cpp
//Leetcode 學習計畫 大海撈針 在haystack找到needle
//28. Find the Index of the first occurrence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        //藥用迴圈， 把所有可能的位置都找過一次
        //ex. sadbutsad 很難過要找sad
        //i:0 sad 把haystack檢前面n個字母
        //    sad
        //i:1 sad
        //      adb
        //i:2   sad
        //      dbu
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++)  {
          if(haystack.substr(i, N) == needle)return i;
            //從i開始剪出n個字母竟然相同
        }
        return -1; //沒有找到答案 要回傳-1代表失敗
    }
};
