///week07-1A.cpp 二合一
/// TAICA NYCU 國立陽明交通大學電機系 期中考第6題
/// Input: 1~9 的數字  Output: 變圓圖的方形
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3
/// Input 2 有3層樓, Input 3 有5層樓, Input 4 有7層樓, Input 5 有9層樓
#include <iostream>
using namespace std;

int main()
{


    int n;
    cin >> n;   /// Step 1: Input

    for (int i = 1; i < 2 * n; i++) { ///step03: for迴圈樓層
            for (int j=1; j<2*n; j++){ ///第幾格
                cout << n; ///先亂印數字n將會拆掉
            }
        cout << "現在是第i樓, i:" << i; ///step04:樓層鷹架
        cout << endl;   /// step02: output,換行
    }
}

