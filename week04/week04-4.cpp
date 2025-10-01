// week04-4.cpp
// LeetCode �m���D��10�D 896. Monotonic Array
// �u���\ int or �u���W ���}�C�A���i�H�u�S���W�B�S����v
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0; // �p�G�����W up�ܦ�1�A�p�G������ down�ܦ�1
        for(int i=1; i<nums.size(); i++){ // �q��1��}�l
            if(nums[i-1] < nums[i]) up = 1;   // ���j �� �k�p�A�W�[
            if(nums[i-1] > nums[i]) down = 1; // ���j �� �k�p�A���
        }
        if(up==1 && down==1) return false; // ���i�S�W�[�S���
        return true;
    }
};
