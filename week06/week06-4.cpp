// week06-4.cpp  �Q�Ѫ�LeetCode²���D
// nums �}�C�̡A�Ʀr���|�W�[�C�аݦ��S��2�Ӭ۾F���l�ǦC�A�̭����O���W?
// ex. 2,5,7,8,9,2,3,4,3,1
// combo 1 2 3 4 5 �S�����j�A���椣�|�A�W�[�A�έ�Ӫ���1

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // ���ΰʺA�W�������X combo ���W
        int N = nums.size(); // ����X�}�C�j�p
        vector<int> combo(N, 1); // ���t�A�̭����� ��Ӫ���1

        for (int i = 1; i < N; i++) {
            // �p�G nums[i-1] < nums[i]�A�N��O���W
            if (nums[i - 1] < nums[i]) combo[i] = combo[i - 1] + 1;
        }

        // ���ۭn�ݦ��S����Ӫ���>=k���϶��Acombo�Ȭ۾F���_���W
        for (int i = 0; i < N - k; i++) {
            if (combo[i] >= k && combo[i + k] >= k) return true;
        }

        return false;
    }
};
