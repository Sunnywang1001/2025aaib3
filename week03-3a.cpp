// week03-3a.cpp
// LeetCode �m���D 1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;  // ��l�� 1�A�]�����k��줸�O 1

        // �`�N�G����g ans = 0�A�]���@�����W 0�A���G�N�û��O 0 �F
        for(int i = 0; i < nums.size(); i++) {
            ans *= nums[i];   // ��C�ӼƦr���i�h
        }

        // �P�_���G���t��
        if(ans > 0) return 1;
        if(ans < 0) return -1;
        return 0;
    }
};
