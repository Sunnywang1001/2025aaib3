// week08-3a.cpp LeetCode 學習主題 Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// 模擬 3x3 井字棋
class Solution {
public:
    void myPrint(int a[3][3]) { // 幫手，將棋盤印出來
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 清空棋盤
        int now = 1; // 現在是第1個玩家
        // now=1 表示玩家A, now=2 表示玩家B
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; // 將該位置標上目前玩家
            myPrint(a); // 顯示當前棋盤

            if (now == 1) now = 2; // 換下一位玩家
            else now = 1;
        }

        return "A"; // 先隨便 return "A"
    }
};
