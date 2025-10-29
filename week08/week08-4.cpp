// week08-4.cpp LeetCode 學習主題 Simulation 進化版
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:北, 1:東, 2:南, 3:西
        int x = 0, y = 0; // 一開始在 (0,0)
        // 將指令重複4次，模擬多輪移動
        instructions = instructions + instructions + instructions + instructions;
        for (char c : instructions) {
            if (c == 'G') { // 往前走
                if (d == 0) y++;   // 向北走1格
                if (d == 1) x++;   // 向東走1格
                if (d == 2) y--;   // 向南走1格
                if (d == 3) x--;   // 向西走1格
            } else if (c == 'R') { // 向右轉 (順時針90度)
                d = (d + 1) % 4;
            } else if (c == 'L') { // 向左轉 (逆時針90度)
                d = (d + 3) % 4;
            }
        }
        return x == 0 && y == 0; // 若回到原點，機器人就在圓裡
    }
};

