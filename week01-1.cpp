//week01-1.cpp
//Leetcode �ǲ߭p�e �j�����w �bhaystack���needle
//28. Find the Index of the first occurrence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�ĥΰj��A ��Ҧ��i�઺��m����L�@��
        //ex. sadbutsad �����L�n��sad
        //i:0 sad ��haystack�˫e��n�Ӧr��
        //    sad
        //i:1 sad
        //      adb
        //i:2   sad
        //      dbu
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++)  {
          if(haystack.substr(i, N) == needle)return i;
            //�qi�}�l�ťXn�Ӧr�����M�ۦP
        }
        return -1; //�S����쵪�� �n�^��-1�N����
    }
};
