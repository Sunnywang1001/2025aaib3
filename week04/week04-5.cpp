// week04-5.cpp
// LeetCode �m���D��7�D 66. Plus One
// �q�k�����ݡA�˹L�Ӫ��j��
//
// 1, 9, 9
// �]�����i��A�ҥH����+1
// �]�����i��A�ҥH�����٭n+1
// �ܨ�o�̡A�^�ӵ��״N��F
//
//  1, 2, 3
// 4�S���i��A�������״N��F
//
// 9, 9, 9
// /10, 0, 0, 0

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // �����D�}�C���X�ӼƦr
        for(int i=N-1; i>=0; i--){ // �q�̫�@��}�l
            if(digits[i] == 9) digits[i]=0 ; // �i��A���ݭn�i�@�B�B�z
            else {
                digits[i]++; // �쥻�O9�A��0�A�~�򩹥��i
                return digits;
            }
        }
        // �p�G���]���A�N��쥻�O 9,9,9... �����p
        // �ݭn�b�̫e�����J�@��1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
