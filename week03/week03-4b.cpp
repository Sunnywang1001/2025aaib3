// week03-4b.cpp �� 2 �ؼg�k�A���\!
// LeetCode �m���D�� 6 �D 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;  // ���СA�ΨӰO���D�s�������ө񪺦�m

        // �Ĥ@���j��G��D�s�����̧Ƿh��e��
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) nums[k++] = nums[i];
        }

        // �ĤG���j��G�ѤU����m�� 0
        for(int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
