// week08-4.cpp LeetCode �ǲߥD�D Simulation �i�ƪ�
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:�_, 1:�F, 2:�n, 3:��
        int x = 0, y = 0; // �@�}�l�b (0,0)
        // �N���O����4���A�����h������
        instructions = instructions + instructions + instructions + instructions;
        for (char c : instructions) {
            if (c == 'G') { // ���e��
                if (d == 0) y++;   // �V�_��1��
                if (d == 1) x++;   // �V�F��1��
                if (d == 2) y--;   // �V�n��1��
                if (d == 3) x--;   // �V�訫1��
            } else if (c == 'R') { // �V�k�� (���ɰw90��)
                d = (d + 1) % 4;
            } else if (c == 'L') { // �V���� (�f�ɰw90��)
                d = (d + 3) % 4;
            }
        }
        return x == 0 && y == 0; // �Y�^����I�A�����H�N�b���
    }
};

