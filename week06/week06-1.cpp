/// week06-1.cpp
///LeetCode �ǲߵ��O ��242�D Valid Anagram
///���w��Ӧr�� s, t�A�ЧP�_���̪��ε��O�_�ۦP(�i�ն���)

class Solution {
public:
    bool isAnagram(string s, string t) {
        // ���ݦr���ƬO�_�ۦP
        if (s.length() != t.length()) return false; // ���P�A�֩w����false

        // ����r�� s ���r���έp�@�U
        int R[26] = {0}; // �إߤ@�ӡu�^����vRecycle������A�Ω�έp�r�����r������
        for (int i = 0; i < s.length(); i++) {
            char c = s[i] - 'a'; // �N�r���ন 0~25 �����Ʀr
            R[c]++;              // �N��������l�[1
        }

        // �A�ݦr�� t ���r���A�ݬݦ��S������ - �d� (����A�δN���Oanagram)
        for (int i = 0; i < t.length(); i++) {
            char c = t[i] - 'a';
            R[c]--;              // �N��l��1
            if (R[c] < 0) return false; // �����ΡA�N���۲�
        }

        return true;
    }
};

