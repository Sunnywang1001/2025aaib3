// week13-4.cpp 聖誕節的閱讀筆記 Advent of Code 2025
// 第一題 — Day 1: Secret Entrance — 神秘的入口
// 我們利用 LeetCode 的印地版 My Playground 我們的測試器 可以把題目 (右下角放stdin輸入)
// LeetCode 會自動幫你 #include 全部頭文件，所以請自行省略不需要

int main() {
    char c; // 每一行，有一個英文
    int d; // 有一個數字
    int now = 50; // 現在的測量是 50
    int ans = 0; // 刻度有「到達幾次」

    while (cin >> c >> d) {

       // if (c=='L') cout << "往左轉" << d << "格\n";
        //if (c=='R') cout << "往右轉" << d << "格\n";

        if (c=='L') now -= d; // 往左轉，減掉它
        if (c=='R') now += d; // 往右轉，加上它

        now = (now % 100 + 100) % 100; // 取餘數 + 100 再取餘數，得到0-99範圍
        if (now==0) ans++; // 刻度有「彈到幾次」

       // cout << "現在到達格子刻度" << now <<"\n";
    }

    cout << "答案是:" << ans;
}
