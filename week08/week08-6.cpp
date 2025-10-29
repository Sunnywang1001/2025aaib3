// 璶ぃ璶糶 week08-6.cpp
// FB刮柑计▆龟喷Τ程穝肈ヘ 6714 炊盽计
// 计厩瞶Input: 4计(ぃ滦)
// 程 - 程
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int myMin(int n) {
    vector<int> a;
    for (int i = 0; i < 4; i++) {
        a.push_back(n % 10);
        n = n / 10;
    }
    sort(a.begin(), a.end());
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}

int myMax(int n) {
    vector<int> a;
    for (int i = 0; i < 4; i++) {
        a.push_back(n % 10);
        n = n / 10;
    }
    sort(a.begin(), a.end());
    return a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
}

int main() {
    int n;
    cout << "叫块4计(计ぃ滦): ";
    cin >> n;
    for (int i = 0; i < 7; i++) {
        int M = myMax(n), m = myMin(n);
        n = M - m;
        printf("%4d - %4d = %4d\n", M, m, n);
    }
}
