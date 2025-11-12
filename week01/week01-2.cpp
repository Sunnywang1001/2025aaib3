#week01-2.py leetcode學習計畫
#leetcode 28. find the index of the first occurrence in a string
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) # 字串長度
        N = len(needle)   #字串長度
        #sadbutsad
        #sad i:0
        #sad i:1
        # ....
        #       sad i:6
        for i in range(H-N+1): #長度9 找 長度3 有0...6
            if haystack[i:i+N] == needle: #若兩個相同
            #把字串從i開始取道i+n結束

                return i #成功找到位置
        return -1 #沒有成功
