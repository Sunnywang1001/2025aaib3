/// week07-1b.cpp
/// TAICA NYCU ��߶�����q�j�ǹq���t �����Ҳ�6�D
/// Input: 1~9 ���Ʀr  Output: �ܶ�Ϫ����
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3
/// Input 2 ��3�h��, Input 3 ��5�h��, Input 4 ��7�h��, Input 5 ��9�h��
#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;   /// Step01: Input

    for (int i = 1; i < 2 * n; i++) {  /// Step03: for�j��, ¶�h
        for (int j = 1; j < 2 * n; j++) {
            if (j > 1) cout << " ";   /// Step05: ���F���j, ���[�@�Ӫť�

            int d = max(abs(n - i), abs(n - j));  /// Step06: ��Z�����̤j��
            cout << d + 1;  /// cout << n - d;  /// ���L�X�Ʀr (��|���), �A+1
        }
        cout << endl;   /// Step02: Output, ����
    }
}

