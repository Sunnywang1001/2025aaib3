/// week14-5.cpp
///昨天 CPE 第1題 UVA 10079
/// Pizza Cutting 切Pizza
#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N < 0) break; // 輸入 -100 就結束 break

        // 公式為 (N^2 + N) / 2 + 1，或 1 + N * (N + 1) / 2
        // 等同於 1 + (1+2+3+...+N)
        long long ans = 1 + (long long)N * (N + 1) / 2; // 使用 long long 避免溢出

        cout << ans << "\n"; // 要跳行
        // 範例：輸入 5 會跳出 16
        // 範例：輸入 10 會跳出 56
    }
    return 0;
}
