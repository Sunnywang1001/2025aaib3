// week08-3b.cpp LeetCode 學習主題 Simulation
// 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    // myPrint() 小幫手的程式可略掉

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 有大括號, 會清空, 全設為0
        int now = 1;      // 玩家A標1, 玩家B標2
        int winner = 0;   // 玩家A贏是1, 玩家B贏是2

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; // 玩家在該位置下棋

            // 橫排
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now) winner = now;
            // 直排
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now) winner = now;
            // 主對角線
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now) winner = now;
            // 副對角線
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now) winner = now;

            // 換下一位玩家
            if (now == 1) now = 2;
            else now = 1;
        }

        // 結果判斷
        if (winner == 1) return "A";       // A 贏
        else if (winner == 2) return "B";  // B 贏
        else if (moves.size() == 9) return "Draw"; // 棋滿平手
        else return "Pending";             // 還沒分出勝負
    }
};

