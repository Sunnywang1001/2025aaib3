// week03-4a.cpp
// LeetCode �m���D�� 6 �D 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // ���μȦs�}�C�A��D�s���Ʀs�_��

        // �Ĥ@���j��G��D�s���Ʀr�����_��
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) ans.push_back(nums[i]);
        }

        // �ĤG���j��G�⦬���쪺�Ʀr��^��}�C�A�᭱�� 0
        for(int i = 0; i < nums.size(); i++) {
            if(i < ans.size()) nums[i] = ans[i]; // �e����D�s�Ʀr
            else nums[i] = 0;                    // �᭱�� 0
        }
    }
};
