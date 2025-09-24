// week03-3b.cpp �G�X�@
// LeetCode �m���D 1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // ��l�� 1�A�N����

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) ans *= +1;   // ���Ƥ����ܲŸ�
            if(nums[i] < 0) ans *= -1;   // �t��½��Ÿ�
            if(nums[i] == 0) ans = 0;    // �@���J�� 0�A���n�@�w�O 0
        }

        if(ans > 0) return 1;
        if(ans < 0) return -1;
        return 0;
    }
};
