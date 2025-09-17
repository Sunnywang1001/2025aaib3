// week02-4.cpp LeetCode�ǲ߭p����2�D
// 389. Find the Difference ���2�Ӧr�ꤤ�u�t���Ӧr���v

class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};  // �i�H�Ψ��x�s�r���A�j�p��256�A�N��u�@�}�l�Ū��v

        for(int i = 0; i < s.length(); i++) {
            char c = s[i];  // ���X�r��
            A[c]++;          // ��r����J��l��
        }

        for(int i = 0; i < t.length(); i++) {
            char c = t[i];
            A[c]--;
            if(A[c] < 0) return c;  // �o�{�t���r��
        }

        return 0;  // ���|�Ψ�o�@���
    }
};

