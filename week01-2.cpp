#week01-2.py leetcode�ǲ߭p�e
#leetcode 28. find the index of the first occurrence in a string
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) # �r�����
        N = len(needle)   #�r�����
        #sadbutsad
        #sad i:0
        #sad i:1
        # ....
        #       sad i:6
        for i in range(H-N+1): #����9 �� ����3 ��0...6
            if haystack[i:i+N] == needle: #�Y��ӬۦP
            #��r��qi�}�l���Di+n����

                return i #���\����m
        return -1 #�S�����\
