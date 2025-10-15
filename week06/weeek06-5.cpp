// week06-5.cpp  ���Ѫ�LeetCode�D���D�A���I��
// 3350. Adjacent Increasing Subarrays Detection II
// �D�ظ�Q�Ѫ� 3349 �ܹ��A�Q�ѬO�^�� bool�A���Ѧ^�ǡu�̤j�i�۾F���סv
// 3349 �� combo�A���� 3350 �Ψ�� combo ����k��A�ݬݯ�h��
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();  // ����X����

        vector<int> left(N, 1);  // ���䪺 combo
        vector<int> right(N, 1); // �k�䪺 combo

        for (int i = 1; i < N; i++) { // ���X�ѥ����k combo ���@��
            if (nums[i - 1] < nums[i]) left[i] = left[i - 1] + 1;
        }

        for (int i = N - 2; i >= 0; i--) { // �ѥk���� combo �����@��
            if (nums[i] < nums[i + 1]) right[i] = right[i + 1] + 1;
        }

        int ans = 0;
        for (int i = 0; i < N - 1; i++) {
            int now = min(left[i], right[i + 1]);
            if (now > ans) ans = now;
        }

        return ans;
    }
};
