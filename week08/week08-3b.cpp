// week08-3b.cpp LeetCode �ǲߥD�D Simulation
// 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    // myPrint() �p���⪺�{���i����

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // ���j�A��, �|�M��, ���]��0
        int now = 1;      // ���aA��1, ���aB��2
        int winner = 0;   // ���aAĹ�O1, ���aBĹ�O2

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; // ���a�b�Ӧ�m�U��

            // ���
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now) winner = now;
            // ����
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now) winner = now;
            // �D�﨤�u
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now) winner = now;
            // �ƹ﨤�u
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now) winner = now;

            // ���U�@�쪱�a
            if (now == 1) now = 2;
            else now = 1;
        }

        // ���G�P�_
        if (winner == 1) return "A";       // A Ĺ
        else if (winner == 2) return "B";  // B Ĺ
        else if (moves.size() == 9) return "Draw"; // �Ѻ�����
        else return "Pending";             // �٨S���X�ӭt
    }
};

