/// week07-1b.cpp
/// TAICA NYCU 國立陽明交通大學電機系 期中考第6題
/// Input: 1~9 的數字  Output: 變圓圖的方形
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3
/// Input 2 有3層環, Input 3 有5層環, Input 4 有7層環, Input 5 有9層環
#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;   /// Step01: Input

    for (int i = 1; i < 2 * n; i++) {  /// Step03: for迴圈, 繞層
        for (int j = 1; j < 2 * n; j++) {
            if (j > 1) cout << " ";   /// Step05: 為了間隔, 先加一個空白

            int d = max(abs(n - i), abs(n - j));  /// Step06: 找距離的最大值
            cout << d + 1;  /// cout << n - d;  /// 先印出數字 (邊會對稱), 再+1
        }
        cout << endl;   /// Step02: Output, 換行
    }
}

