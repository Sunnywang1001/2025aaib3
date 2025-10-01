/// week04-2.cpp
/// 更多的 vector<int> a 的初始化 (裡面要放什麼值)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(3);      /// 初始化的長度3，裡面通通放0
    vector<int> b(3, 88);  /// 初始化的長度3，裡面通通放88

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0}; /// C語言的固定大小、初始化

    vector<int> d(c, c+3); /// 從哪開始到哪結束
    for(int i=0; i<d.size(); i++) cout << d[i] << " ";
    cout << "這是用 C語言的陣列輔助，幫忙C++裡vector對應的一堆值\n\n";

    vector<int> e(c, c+10); /// 把C陣列裡的值，轉抄到vector裡，形成10個數字
    for(int i=0; i<e.size(); i++) cout << e[i] << " ";
    cout << "這是用 C語言的陣列輔助，幫忙C++陣列的初始化一堆值\n\n";
}
