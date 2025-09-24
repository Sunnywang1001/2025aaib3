// week03-5.cpp
// LeetCode �m���D�� 9 �D Arithmetic Progression from Sequence
// �P�_�@�Ӱ}�C�A�ण�୫�s�Ƨǫ�Φ����t�ƦC

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // ���Ƨ� (�p��j)

        int d = arr[1] - arr[0]; // ���tD
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] - arr[i-1] != d) return false;
            // �p�G���-�e�����AD���ܴN����
        }
        return true;
    }
};
