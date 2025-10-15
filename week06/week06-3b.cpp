// week06-3b.cpp
// SOIT106_ADVANCE_009

#include <iostream>
using namespace std;

void f(int n)
{
    if (n == 0) return;      // 終止條件
    cout << n % 10;          // 印出個位數
    f(n / 10);               // 遞迴處理剩下的數字
}

int main()
{
    int n;
    cin >> n;
    f(n);
    cout << "\n";
}
